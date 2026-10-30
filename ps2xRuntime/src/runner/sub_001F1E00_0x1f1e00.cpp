#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1E00
// Address: 0x1f1e00 - 0x1f1fa8
void sub_001F1E00_0x1f1e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1E00_0x1f1e00");
#endif

    switch (ctx->pc) {
        case 0x1f1e00u: goto label_1f1e00;
        case 0x1f1e04u: goto label_1f1e04;
        case 0x1f1e08u: goto label_1f1e08;
        case 0x1f1e0cu: goto label_1f1e0c;
        case 0x1f1e10u: goto label_1f1e10;
        case 0x1f1e14u: goto label_1f1e14;
        case 0x1f1e18u: goto label_1f1e18;
        case 0x1f1e1cu: goto label_1f1e1c;
        case 0x1f1e20u: goto label_1f1e20;
        case 0x1f1e24u: goto label_1f1e24;
        case 0x1f1e28u: goto label_1f1e28;
        case 0x1f1e2cu: goto label_1f1e2c;
        case 0x1f1e30u: goto label_1f1e30;
        case 0x1f1e34u: goto label_1f1e34;
        case 0x1f1e38u: goto label_1f1e38;
        case 0x1f1e3cu: goto label_1f1e3c;
        case 0x1f1e40u: goto label_1f1e40;
        case 0x1f1e44u: goto label_1f1e44;
        case 0x1f1e48u: goto label_1f1e48;
        case 0x1f1e4cu: goto label_1f1e4c;
        case 0x1f1e50u: goto label_1f1e50;
        case 0x1f1e54u: goto label_1f1e54;
        case 0x1f1e58u: goto label_1f1e58;
        case 0x1f1e5cu: goto label_1f1e5c;
        case 0x1f1e60u: goto label_1f1e60;
        case 0x1f1e64u: goto label_1f1e64;
        case 0x1f1e68u: goto label_1f1e68;
        case 0x1f1e6cu: goto label_1f1e6c;
        case 0x1f1e70u: goto label_1f1e70;
        case 0x1f1e74u: goto label_1f1e74;
        case 0x1f1e78u: goto label_1f1e78;
        case 0x1f1e7cu: goto label_1f1e7c;
        case 0x1f1e80u: goto label_1f1e80;
        case 0x1f1e84u: goto label_1f1e84;
        case 0x1f1e88u: goto label_1f1e88;
        case 0x1f1e8cu: goto label_1f1e8c;
        case 0x1f1e90u: goto label_1f1e90;
        case 0x1f1e94u: goto label_1f1e94;
        case 0x1f1e98u: goto label_1f1e98;
        case 0x1f1e9cu: goto label_1f1e9c;
        case 0x1f1ea0u: goto label_1f1ea0;
        case 0x1f1ea4u: goto label_1f1ea4;
        case 0x1f1ea8u: goto label_1f1ea8;
        case 0x1f1eacu: goto label_1f1eac;
        case 0x1f1eb0u: goto label_1f1eb0;
        case 0x1f1eb4u: goto label_1f1eb4;
        case 0x1f1eb8u: goto label_1f1eb8;
        case 0x1f1ebcu: goto label_1f1ebc;
        case 0x1f1ec0u: goto label_1f1ec0;
        case 0x1f1ec4u: goto label_1f1ec4;
        case 0x1f1ec8u: goto label_1f1ec8;
        case 0x1f1eccu: goto label_1f1ecc;
        case 0x1f1ed0u: goto label_1f1ed0;
        case 0x1f1ed4u: goto label_1f1ed4;
        case 0x1f1ed8u: goto label_1f1ed8;
        case 0x1f1edcu: goto label_1f1edc;
        case 0x1f1ee0u: goto label_1f1ee0;
        case 0x1f1ee4u: goto label_1f1ee4;
        case 0x1f1ee8u: goto label_1f1ee8;
        case 0x1f1eecu: goto label_1f1eec;
        case 0x1f1ef0u: goto label_1f1ef0;
        case 0x1f1ef4u: goto label_1f1ef4;
        case 0x1f1ef8u: goto label_1f1ef8;
        case 0x1f1efcu: goto label_1f1efc;
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f04u: goto label_1f1f04;
        case 0x1f1f08u: goto label_1f1f08;
        case 0x1f1f0cu: goto label_1f1f0c;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f14u: goto label_1f1f14;
        case 0x1f1f18u: goto label_1f1f18;
        case 0x1f1f1cu: goto label_1f1f1c;
        case 0x1f1f20u: goto label_1f1f20;
        case 0x1f1f24u: goto label_1f1f24;
        case 0x1f1f28u: goto label_1f1f28;
        case 0x1f1f2cu: goto label_1f1f2c;
        case 0x1f1f30u: goto label_1f1f30;
        case 0x1f1f34u: goto label_1f1f34;
        case 0x1f1f38u: goto label_1f1f38;
        case 0x1f1f3cu: goto label_1f1f3c;
        case 0x1f1f40u: goto label_1f1f40;
        case 0x1f1f44u: goto label_1f1f44;
        case 0x1f1f48u: goto label_1f1f48;
        case 0x1f1f4cu: goto label_1f1f4c;
        case 0x1f1f50u: goto label_1f1f50;
        case 0x1f1f54u: goto label_1f1f54;
        case 0x1f1f58u: goto label_1f1f58;
        case 0x1f1f5cu: goto label_1f1f5c;
        case 0x1f1f60u: goto label_1f1f60;
        case 0x1f1f64u: goto label_1f1f64;
        case 0x1f1f68u: goto label_1f1f68;
        case 0x1f1f6cu: goto label_1f1f6c;
        case 0x1f1f70u: goto label_1f1f70;
        case 0x1f1f74u: goto label_1f1f74;
        case 0x1f1f78u: goto label_1f1f78;
        case 0x1f1f7cu: goto label_1f1f7c;
        case 0x1f1f80u: goto label_1f1f80;
        case 0x1f1f84u: goto label_1f1f84;
        case 0x1f1f88u: goto label_1f1f88;
        case 0x1f1f8cu: goto label_1f1f8c;
        case 0x1f1f90u: goto label_1f1f90;
        case 0x1f1f94u: goto label_1f1f94;
        case 0x1f1f98u: goto label_1f1f98;
        case 0x1f1f9cu: goto label_1f1f9c;
        case 0x1f1fa0u: goto label_1f1fa0;
        case 0x1f1fa4u: goto label_1f1fa4;
        default: break;
    }

    ctx->pc = 0x1f1e00u;

label_1f1e00:
    // 0x1f1e00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f1e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1f1e04:
    // 0x1f1e04: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1f1e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1f1e08:
    // 0x1f1e08: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1f1e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1f1e0c:
    // 0x1f1e0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1e10:
    // 0x1f1e10: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1f1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1f1e14:
    // 0x1f1e14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f1e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1f1e18:
    // 0x1f1e18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f1e1c:
    // 0x1f1e1c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1f1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1f1e20:
    // 0x1f1e20: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1f1e24:
    if (ctx->pc == 0x1F1E24u) {
        ctx->pc = 0x1F1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E20u;
        // 0x1f1e24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1E28u;
        goto label_1f1e28;
    }
    ctx->pc = 0x1F1E20u;
    {
        const bool branch_taken_0x1f1e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E20u;
        // 0x1f1e24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e20) {
            ctx->pc = 0x1F1F90u;
            goto label_1f1f90;
        }
    }
    ctx->pc = 0x1F1E28u;
label_1f1e28:
    // 0x1f1e28: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1f1e28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1f1e2c:
    // 0x1f1e2c: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x1f1e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_1f1e30:
    // 0x1f1e30: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1f1e34:
    // 0x1f1e34: 0x26107170  addiu       $s0, $s0, 0x7170
    ctx->pc = 0x1f1e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29040));
label_1f1e38:
    // 0x1f1e38: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1e3c:
    // 0x1f1e3c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1e40:
    // 0x1f1e40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f1e44:
    // 0x1f1e44: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f1e44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1e48:
    // 0x1f1e48: 0x240900e3  addiu       $t1, $zero, 0xE3
    ctx->pc = 0x1f1e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
label_1f1e4c:
    // 0x1f1e4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1e4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1e50:
    // 0x1f1e50: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1e54:
    // 0x1f1e54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1e54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1e58:
    // 0x1f1e58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1e5c:
    // 0x1f1e5c: 0x24a572d0  addiu       $a1, $a1, 0x72D0
    ctx->pc = 0x1f1e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29392));
label_1f1e60:
    // 0x1f1e60: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1f1e64:
    // 0x1f1e64: 0x40f809  jalr        $v0
label_1f1e68:
    if (ctx->pc == 0x1F1E68u) {
        ctx->pc = 0x1F1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E64u;
        // 0x1f1e68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1E6Cu;
        goto label_1f1e6c;
    }
    ctx->pc = 0x1F1E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1E6Cu);
        ctx->pc = 0x1F1E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E64u;
        // 0x1f1e68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1E64u, 0x1F1E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1E6Cu;
label_1f1e6c:
    // 0x1f1e6c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x1f1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_1f1e70:
    // 0x1f1e70: 0xc07c6e4  jal         func_1F1B90
label_1f1e74:
    if (ctx->pc == 0x1F1E74u) {
        ctx->pc = 0x1F1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E70u;
        // 0x1f1e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1E78u;
        goto label_1f1e78;
    }
    ctx->pc = 0x1F1E70u;
    SET_GPR_U32(ctx, 31, 0x1F1E78u);
    ctx->pc = 0x1F1E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E70u;
    // 0x1f1e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1B90u, 0x1F1E70u, 0x1F1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E78u;
label_1f1e78:
    // 0x1f1e78: 0xc07c702  jal         func_1F1C08
label_1f1e7c:
    if (ctx->pc == 0x1F1E7Cu) {
        ctx->pc = 0x1F1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E78u;
        // 0x1f1e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1E80u;
        goto label_1f1e80;
    }
    ctx->pc = 0x1F1E78u;
    SET_GPR_U32(ctx, 31, 0x1F1E80u);
    ctx->pc = 0x1F1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E78u;
    // 0x1f1e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1C08u, 0x1F1E78u, 0x1F1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E80u;
label_1f1e80:
    // 0x1f1e80: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f1e84:
    // 0x1f1e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1e88:
    // 0x1f1e88: 0x8e460060  lw          $a2, 0x60($s2)
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1f1e8c:
    // 0x1f1e8c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1f1e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1f1e90:
    // 0x1f1e90: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1f1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1f1e94:
    // 0x1f1e94: 0x40f809  jalr        $v0
label_1f1e98:
    if (ctx->pc == 0x1F1E98u) {
        ctx->pc = 0x1F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E94u;
        // 0x1f1e98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1E9Cu;
        goto label_1f1e9c;
    }
    ctx->pc = 0x1F1E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1E9Cu);
        ctx->pc = 0x1F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E94u;
        // 0x1f1e98: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1E94u, 0x1F1E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1E9Cu;
label_1f1e9c:
    // 0x1f1e9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f1e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1f1ea0:
    // 0x1f1ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f1ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f1ea4:
    // 0x1f1ea4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1f1ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f1ea8:
    // 0x1f1ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f1eac:
    // 0x1f1eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f1eb0:
    // 0x1f1eb0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1eb4:
    // 0x1f1eb4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f1eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1f1eb8:
    // 0x1f1eb8: 0x24a572d8  addiu       $a1, $a1, 0x72D8
    ctx->pc = 0x1f1eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29400));
label_1f1ebc:
    // 0x1f1ebc: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x1f1ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_1f1ec0:
    // 0x1f1ec0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1f1ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ec4:
    // 0x1f1ec4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1f1ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1f1ec8:
    // 0x1f1ec8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1f1ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f1ecc:
    // 0x1f1ecc: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x1f1eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1f1ed0:
    // 0x1f1ed0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1f1ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f1ed4:
    // 0x1f1ed4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1f1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1f1ed8:
    // 0x1f1ed8: 0x240900ec  addiu       $t1, $zero, 0xEC
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_1f1edc:
    // 0x1f1edc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1edcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ee0:
    // 0x1f1ee0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1ee0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ee4:
    // 0x1f1ee4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1f1ee8:
    // 0x1f1ee8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1f1ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1f1eec:
    // 0x1f1eec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1f1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1f1ef0:
    // 0x1f1ef0: 0x40f809  jalr        $v0
label_1f1ef4:
    if (ctx->pc == 0x1F1EF4u) {
        ctx->pc = 0x1F1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EF0u;
        // 0x1f1ef4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1EF8u;
        goto label_1f1ef8;
    }
    ctx->pc = 0x1F1EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1EF8u);
        ctx->pc = 0x1F1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EF0u;
        // 0x1f1ef4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1EF0u, 0x1F1EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1EF8u;
label_1f1ef8:
    // 0x1f1ef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f1efc:
    if (ctx->pc == 0x1F1EFCu) {
        ctx->pc = 0x1F1F00u;
        goto label_1f1f00;
    }
    ctx->pc = 0x1F1EF8u;
    {
        const bool branch_taken_0x1f1ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ef8) {
            ctx->pc = 0x1F1F08u;
            goto label_1f1f08;
        }
    }
    ctx->pc = 0x1F1F00u;
label_1f1f00:
    // 0x1f1f00: 0xc0686fe  jal         func_1A1BF8
label_1f1f04:
    if (ctx->pc == 0x1F1F04u) {
        ctx->pc = 0x1F1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F00u;
        // 0x1f1f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F08u;
        goto label_1f1f08;
    }
    ctx->pc = 0x1F1F00u;
    SET_GPR_U32(ctx, 31, 0x1F1F08u);
    ctx->pc = 0x1F1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F00u;
    // 0x1f1f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1F1F00u, 0x1F1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F08u;
label_1f1f08:
    // 0x1f1f08: 0xc07f720  jal         func_1FDC80
label_1f1f0c:
    if (ctx->pc == 0x1F1F0Cu) {
        ctx->pc = 0x1F1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F08u;
        // 0x1f1f0c: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F10u;
        goto label_1f1f10;
    }
    ctx->pc = 0x1F1F08u;
    SET_GPR_U32(ctx, 31, 0x1F1F10u);
    ctx->pc = 0x1F1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F08u;
    // 0x1f1f0c: 0xae420078  sw          $v0, 0x78($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC80u, 0x1F1F08u, 0x1F1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0x240300af  addiu       $v1, $zero, 0xAF
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
label_1f1f14:
    // 0x1f1f14: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f1f18:
    // 0x1f1f18: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1f1f18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_1f1f1c:
    // 0x1f1f1c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x1f1f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f1f20:
    // 0x1f1f20: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f1f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1f1f24:
    // 0x1f1f24: 0x3c09000c  lui         $t1, 0xC
    ctx->pc = 0x1f1f24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12 << 16));
label_1f1f28:
    // 0x1f1f28: 0xa04c0003  sb          $t4, 0x3($v0)
    ctx->pc = 0x1f1f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 12));
label_1f1f2c:
    // 0x1f1f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f30:
    // 0x1f1f30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f1f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1f1f34:
    // 0x1f1f34: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f1f34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1f1f38:
    // 0x1f1f38: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x1f1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_1f1f3c:
    // 0x1f1f3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f1f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1f40:
    // 0x1f1f40: 0x8e4a0064  lw          $t2, 0x64($s2)
    ctx->pc = 0x1f1f40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_1f1f44:
    // 0x1f1f44: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1f48:
    // 0x1f1f48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1f4c:
    // 0x1f1f4c: 0x35290005  ori         $t1, $t1, 0x5
    ctx->pc = 0x1f1f4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5);
label_1f1f50:
    // 0x1f1f50: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1f1f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1f54:
    // 0x1f1f54: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1f1f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1f1f58:
    // 0x1f1f58: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x1f1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
label_1f1f5c:
    // 0x1f1f5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1f1f60:
    // 0x1f1f60: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1f1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f1f64:
    // 0x1f1f64: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1f1f68:
    // 0x1f1f68: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1f1f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1f1f6c:
    // 0x1f1f6c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1f1f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1f1f70:
    // 0x1f1f70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f1f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1f1f74:
    // 0x1f1f74: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1f1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1f1f78:
    // 0x1f1f78: 0x40f809  jalr        $v0
label_1f1f7c:
    if (ctx->pc == 0x1F1F7Cu) {
        ctx->pc = 0x1F1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F78u;
        // 0x1f1f7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F80u;
        goto label_1f1f80;
    }
    ctx->pc = 0x1F1F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1F80u);
        ctx->pc = 0x1F1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F78u;
        // 0x1f1f7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1F78u, 0x1F1F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1F80u;
label_1f1f80:
    // 0x1f1f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1f84:
    // 0x1f1f84: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1f1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_1f1f88:
    // 0x1f1f88: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1f1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_1f1f8c:
    // 0x1f1f8c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1f1f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f1f90:
    // 0x1f1f90: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1f1f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f1f94:
    // 0x1f1f94: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1f1f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f1f98:
    // 0x1f1f98: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f1f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1f9c:
    // 0x1f1f9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f1f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1fa0:
    // 0x1f1fa0: 0x3e00008  jr          $ra
label_1f1fa4:
    if (ctx->pc == 0x1F1FA4u) {
        ctx->pc = 0x1F1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FA0u;
        // 0x1f1fa4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1FA8u;
        goto label_fallthrough_0x1f1fa0;
    }
    ctx->pc = 0x1F1FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FA0u;
        // 0x1f1fa4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f1fa0:
    ctx->pc = 0x1F1FA8u;
}
