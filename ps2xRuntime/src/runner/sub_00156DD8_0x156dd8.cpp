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

// Function: sub_00156DD8
// Address: 0x156dd8 - 0x156f90
void sub_00156DD8_0x156dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156DD8_0x156dd8");
#endif

    switch (ctx->pc) {
        case 0x156dd8u: goto label_156dd8;
        case 0x156ddcu: goto label_156ddc;
        case 0x156de0u: goto label_156de0;
        case 0x156de4u: goto label_156de4;
        case 0x156de8u: goto label_156de8;
        case 0x156decu: goto label_156dec;
        case 0x156df0u: goto label_156df0;
        case 0x156df4u: goto label_156df4;
        case 0x156df8u: goto label_156df8;
        case 0x156dfcu: goto label_156dfc;
        case 0x156e00u: goto label_156e00;
        case 0x156e04u: goto label_156e04;
        case 0x156e08u: goto label_156e08;
        case 0x156e0cu: goto label_156e0c;
        case 0x156e10u: goto label_156e10;
        case 0x156e14u: goto label_156e14;
        case 0x156e18u: goto label_156e18;
        case 0x156e1cu: goto label_156e1c;
        case 0x156e20u: goto label_156e20;
        case 0x156e24u: goto label_156e24;
        case 0x156e28u: goto label_156e28;
        case 0x156e2cu: goto label_156e2c;
        case 0x156e30u: goto label_156e30;
        case 0x156e34u: goto label_156e34;
        case 0x156e38u: goto label_156e38;
        case 0x156e3cu: goto label_156e3c;
        case 0x156e40u: goto label_156e40;
        case 0x156e44u: goto label_156e44;
        case 0x156e48u: goto label_156e48;
        case 0x156e4cu: goto label_156e4c;
        case 0x156e50u: goto label_156e50;
        case 0x156e54u: goto label_156e54;
        case 0x156e58u: goto label_156e58;
        case 0x156e5cu: goto label_156e5c;
        case 0x156e60u: goto label_156e60;
        case 0x156e64u: goto label_156e64;
        case 0x156e68u: goto label_156e68;
        case 0x156e6cu: goto label_156e6c;
        case 0x156e70u: goto label_156e70;
        case 0x156e74u: goto label_156e74;
        case 0x156e78u: goto label_156e78;
        case 0x156e7cu: goto label_156e7c;
        case 0x156e80u: goto label_156e80;
        case 0x156e84u: goto label_156e84;
        case 0x156e88u: goto label_156e88;
        case 0x156e8cu: goto label_156e8c;
        case 0x156e90u: goto label_156e90;
        case 0x156e94u: goto label_156e94;
        case 0x156e98u: goto label_156e98;
        case 0x156e9cu: goto label_156e9c;
        case 0x156ea0u: goto label_156ea0;
        case 0x156ea4u: goto label_156ea4;
        case 0x156ea8u: goto label_156ea8;
        case 0x156eacu: goto label_156eac;
        case 0x156eb0u: goto label_156eb0;
        case 0x156eb4u: goto label_156eb4;
        case 0x156eb8u: goto label_156eb8;
        case 0x156ebcu: goto label_156ebc;
        case 0x156ec0u: goto label_156ec0;
        case 0x156ec4u: goto label_156ec4;
        case 0x156ec8u: goto label_156ec8;
        case 0x156eccu: goto label_156ecc;
        case 0x156ed0u: goto label_156ed0;
        case 0x156ed4u: goto label_156ed4;
        case 0x156ed8u: goto label_156ed8;
        case 0x156edcu: goto label_156edc;
        case 0x156ee0u: goto label_156ee0;
        case 0x156ee4u: goto label_156ee4;
        case 0x156ee8u: goto label_156ee8;
        case 0x156eecu: goto label_156eec;
        case 0x156ef0u: goto label_156ef0;
        case 0x156ef4u: goto label_156ef4;
        case 0x156ef8u: goto label_156ef8;
        case 0x156efcu: goto label_156efc;
        case 0x156f00u: goto label_156f00;
        case 0x156f04u: goto label_156f04;
        case 0x156f08u: goto label_156f08;
        case 0x156f0cu: goto label_156f0c;
        case 0x156f10u: goto label_156f10;
        case 0x156f14u: goto label_156f14;
        case 0x156f18u: goto label_156f18;
        case 0x156f1cu: goto label_156f1c;
        case 0x156f20u: goto label_156f20;
        case 0x156f24u: goto label_156f24;
        case 0x156f28u: goto label_156f28;
        case 0x156f2cu: goto label_156f2c;
        case 0x156f30u: goto label_156f30;
        case 0x156f34u: goto label_156f34;
        case 0x156f38u: goto label_156f38;
        case 0x156f3cu: goto label_156f3c;
        case 0x156f40u: goto label_156f40;
        case 0x156f44u: goto label_156f44;
        case 0x156f48u: goto label_156f48;
        case 0x156f4cu: goto label_156f4c;
        case 0x156f50u: goto label_156f50;
        case 0x156f54u: goto label_156f54;
        case 0x156f58u: goto label_156f58;
        case 0x156f5cu: goto label_156f5c;
        case 0x156f60u: goto label_156f60;
        case 0x156f64u: goto label_156f64;
        case 0x156f68u: goto label_156f68;
        case 0x156f6cu: goto label_156f6c;
        case 0x156f70u: goto label_156f70;
        case 0x156f74u: goto label_156f74;
        case 0x156f78u: goto label_156f78;
        case 0x156f7cu: goto label_156f7c;
        case 0x156f80u: goto label_156f80;
        case 0x156f84u: goto label_156f84;
        case 0x156f88u: goto label_156f88;
        case 0x156f8cu: goto label_156f8c;
        default: break;
    }

    ctx->pc = 0x156dd8u;

label_156dd8:
    // 0x156dd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_156ddc:
    // 0x156ddc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156de0:
    // 0x156de0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x156de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_156de4:
    // 0x156de4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x156de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_156de8:
    // 0x156de8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x156de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_156dec:
    // 0x156dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156df0:
    // 0x156df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x156df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_156df4:
    // 0x156df4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x156df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156df8:
    // 0x156df8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_156dfc:
    // 0x156dfc: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x156dfcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_156e00:
    // 0x156e00: 0x8c4b27e4  lw          $t3, 0x27E4($v0)
    ctx->pc = 0x156e00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_156e04:
    // 0x156e04: 0x24a5eaf0  addiu       $a1, $a1, -0x1510
    ctx->pc = 0x156e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961904));
label_156e08:
    // 0x156e08: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x156e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_156e0c:
    // 0x156e0c: 0x2508eaf8  addiu       $t0, $t0, -0x1508
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961912));
label_156e10:
    // 0x156e10: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x156e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_156e14:
    // 0x156e14: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x156e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_156e18:
    // 0x156e18: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x156e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_156e1c:
    // 0x156e1c: 0x24090056  addiu       $t1, $zero, 0x56
    ctx->pc = 0x156e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_156e20:
    // 0x156e20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x156e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156e24:
    // 0x156e24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x156e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_156e28:
    // 0x156e28: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x156e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_156e2c:
    // 0x156e2c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_156e30:
    // 0x156e30: 0x40f809  jalr        $v0
label_156e34:
    if (ctx->pc == 0x156E34u) {
        ctx->pc = 0x156E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E30u;
        // 0x156e34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E38u;
        goto label_156e38;
    }
    ctx->pc = 0x156E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156E38u);
        ctx->pc = 0x156E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E30u;
        // 0x156e34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156E30u, 0x156E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156E38u;
label_156e38:
    // 0x156e38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_156e3c:
    // 0x156e3c: 0xc0579e4  jal         func_15E790
label_156e40:
    if (ctx->pc == 0x156E40u) {
        ctx->pc = 0x156E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E3Cu;
        // 0x156e40: 0xac62c6cc  sw          $v0, -0x3934($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E44u;
        goto label_156e44;
    }
    ctx->pc = 0x156E3Cu;
    SET_GPR_U32(ctx, 31, 0x156E44u);
    ctx->pc = 0x156E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E3Cu;
    // 0x156e40: 0xac62c6cc  sw          $v0, -0x3934($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952652), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x156E3Cu, 0x156E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E44u;
label_156e44:
    // 0x156e44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_156e48:
    // 0x156e48: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_156e4c:
    if (ctx->pc == 0x156E4Cu) {
        ctx->pc = 0x156E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E48u;
        // 0x156e4c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E50u;
        goto label_156e50;
    }
    ctx->pc = 0x156E48u;
    {
        const bool branch_taken_0x156e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x156E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E48u;
        // 0x156e4c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e48) {
            ctx->pc = 0x156E58u;
            goto label_156e58;
        }
    }
    ctx->pc = 0x156E50u;
label_156e50:
    // 0x156e50: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x156e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_156e54:
    // 0x156e54: 0xac405db8  sw          $zero, 0x5DB8($v0)
    ctx->pc = 0x156e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23992), GPR_U32(ctx, 0));
label_156e58:
    // 0x156e58: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x156e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_156e5c:
    // 0x156e5c: 0x14510006  bne         $v0, $s1, . + 4 + (0x6 << 2)
label_156e60:
    if (ctx->pc == 0x156E60u) {
        ctx->pc = 0x156E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E5Cu;
        // 0x156e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E64u;
        goto label_156e64;
    }
    ctx->pc = 0x156E5Cu;
    {
        const bool branch_taken_0x156e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x156E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E5Cu;
        // 0x156e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e5c) {
            ctx->pc = 0x156E78u;
            goto label_156e78;
        }
    }
    ctx->pc = 0x156E64u;
label_156e64:
    // 0x156e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156e68:
    // 0x156e68: 0xc0e8b20  jal         func_3A2C80
label_156e6c:
    if (ctx->pc == 0x156E6Cu) {
        ctx->pc = 0x156E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E68u;
        // 0x156e6c: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E70u;
        goto label_156e70;
    }
    ctx->pc = 0x156E68u;
    SET_GPR_U32(ctx, 31, 0x156E70u);
    ctx->pc = 0x156E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E68u;
    // 0x156e6c: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x156E68u, 0x156E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E70u;
label_156e70:
    // 0x156e70: 0x10000005  b           . + 4 + (0x5 << 2)
label_156e74:
    if (ctx->pc == 0x156E74u) {
        ctx->pc = 0x156E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E70u;
        // 0x156e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E78u;
        goto label_156e78;
    }
    ctx->pc = 0x156E70u;
    {
        const bool branch_taken_0x156e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E70u;
        // 0x156e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e70) {
            ctx->pc = 0x156E88u;
            goto label_156e88;
        }
    }
    ctx->pc = 0x156E78u;
label_156e78:
    // 0x156e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156e7c:
    // 0x156e7c: 0xc0e8b20  jal         func_3A2C80
label_156e80:
    if (ctx->pc == 0x156E80u) {
        ctx->pc = 0x156E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E7Cu;
        // 0x156e80: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156E84u;
        goto label_156e84;
    }
    ctx->pc = 0x156E7Cu;
    SET_GPR_U32(ctx, 31, 0x156E84u);
    ctx->pc = 0x156E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E7Cu;
    // 0x156e80: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x156E7Cu, 0x156E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E84u;
label_156e84:
    // 0x156e84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156e88:
    // 0x156e88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x156e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_156e8c:
    // 0x156e8c: 0x8c44b8b8  lw          $a0, -0x4748($v0)
    ctx->pc = 0x156e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_156e90:
    // 0x156e90: 0x8c65489c  lw          $a1, 0x489C($v1)
    ctx->pc = 0x156e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_156e94:
    // 0x156e94: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x156e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_156e98:
    // 0x156e98: 0x90a20410  lbu         $v0, 0x410($a1)
    ctx->pc = 0x156e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1040)));
label_156e9c:
    // 0x156e9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_156ea0:
    if (ctx->pc == 0x156EA0u) {
        ctx->pc = 0x156EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E9Cu;
        // 0x156ea0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EA4u;
        goto label_156ea4;
    }
    ctx->pc = 0x156E9Cu;
    {
        const bool branch_taken_0x156e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E9Cu;
        // 0x156ea0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e9c) {
            ctx->pc = 0x156EDCu;
            goto label_156edc;
        }
    }
    ctx->pc = 0x156EA4u;
label_156ea4:
    // 0x156ea4: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x156ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_156ea8:
    // 0x156ea8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x156ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156eac:
    // 0x156eac: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_156eb0:
    // 0x156eb0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x156eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_156eb4:
    // 0x156eb4: 0x40f809  jalr        $v0
label_156eb8:
    if (ctx->pc == 0x156EB8u) {
        ctx->pc = 0x156EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB4u;
        // 0x156eb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EBCu;
        goto label_156ebc;
    }
    ctx->pc = 0x156EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156EBCu);
        ctx->pc = 0x156EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EB4u;
        // 0x156eb8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156EB4u, 0x156EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156EBCu;
label_156ebc:
    // 0x156ebc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_156ec0:
    if (ctx->pc == 0x156EC0u) {
        ctx->pc = 0x156EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EBCu;
        // 0x156ec0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EC4u;
        goto label_156ec4;
    }
    ctx->pc = 0x156EBCu;
    {
        const bool branch_taken_0x156ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EBCu;
        // 0x156ec0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ebc) {
            ctx->pc = 0x156EE0u;
            goto label_156ee0;
        }
    }
    ctx->pc = 0x156EC4u;
label_156ec4:
    // 0x156ec4: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x156ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_156ec8:
    // 0x156ec8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x156ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_156ecc:
    // 0x156ecc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x156eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_156ed0:
    // 0x156ed0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x156ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_156ed4:
    // 0x156ed4: 0x60f809  jalr        $v1
label_156ed8:
    if (ctx->pc == 0x156ED8u) {
        ctx->pc = 0x156ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ED4u;
        // 0x156ed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EDCu;
        goto label_156edc;
    }
    ctx->pc = 0x156ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156EDCu);
        ctx->pc = 0x156ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156ED4u;
        // 0x156ed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156ED4u, 0x156EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156EDCu;
label_156edc:
    // 0x156edc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156ee0:
    // 0x156ee0: 0xc043ec8  jal         func_10FB20
label_156ee4:
    if (ctx->pc == 0x156EE4u) {
        ctx->pc = 0x156EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156EE0u;
        // 0x156ee4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156EE8u;
        goto label_156ee8;
    }
    ctx->pc = 0x156EE0u;
    SET_GPR_U32(ctx, 31, 0x156EE8u);
    ctx->pc = 0x156EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EE0u;
    // 0x156ee4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB20u, 0x156EE0u, 0x156EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EE8u;
label_156ee8:
    // 0x156ee8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x156ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_156eec:
    // 0x156eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156ef0:
    // 0x156ef0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x156ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_156ef4:
    // 0x156ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_156ef8:
    // 0x156ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_156efc:
    // 0x156efc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x156efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_156f00:
    // 0x156f00: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x156f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_156f04:
    // 0x156f04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x156f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_156f08:
    // 0x156f08: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x156f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_156f0c:
    // 0x156f0c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x156f0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_156f10:
    // 0x156f10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x156f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_156f14:
    // 0x156f14: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_156f18:
    // 0x156f18: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x156f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_156f1c:
    // 0x156f1c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_156f20:
    // 0x156f20: 0xc0705ce  jal         func_1C1738
label_156f24:
    if (ctx->pc == 0x156F24u) {
        ctx->pc = 0x156F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F20u;
        // 0x156f24: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F28u;
        goto label_156f28;
    }
    ctx->pc = 0x156F20u;
    SET_GPR_U32(ctx, 31, 0x156F28u);
    ctx->pc = 0x156F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F20u;
    // 0x156f24: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1738u, 0x156F20u, 0x156F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F28u;
label_156f28:
    // 0x156f28: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_156f2c:
    // 0x156f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156f30:
    // 0x156f30: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_156f34:
    if (ctx->pc == 0x156F34u) {
        ctx->pc = 0x156F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F30u;
        // 0x156f34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F38u;
        goto label_156f38;
    }
    ctx->pc = 0x156F30u;
    {
        const bool branch_taken_0x156f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x156f30) {
            ctx->pc = 0x156F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156F30u;
            // 0x156f34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156F7Cu;
            goto label_156f7c;
        }
    }
    ctx->pc = 0x156F38u;
label_156f38:
    // 0x156f38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_156f3c:
    // 0x156f3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x156f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156f40:
    // 0x156f40: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x156f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
label_156f44:
    // 0x156f44: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x156f44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_156f48:
    // 0x156f48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156f4c:
    // 0x156f4c: 0x0  nop
    ctx->pc = 0x156f4cu;
    // NOP
label_156f50:
    // 0x156f50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_156f54:
    // 0x156f54: 0x8e45d2f0  lw          $a1, -0x2D10($s2)
    ctx->pc = 0x156f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955760)));
label_156f58:
    // 0x156f58: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_156f5c:
    // 0x156f5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x156f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_156f60:
    // 0x156f60: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x156f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_156f64:
    // 0x156f64: 0xc063262  jal         func_18C988
label_156f68:
    if (ctx->pc == 0x156F68u) {
        ctx->pc = 0x156F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F64u;
        // 0x156f68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F6Cu;
        goto label_156f6c;
    }
    ctx->pc = 0x156F64u;
    SET_GPR_U32(ctx, 31, 0x156F6Cu);
    ctx->pc = 0x156F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F64u;
    // 0x156f68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x156F64u, 0x156F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F6Cu;
label_156f6c:
    // 0x156f6c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x156f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_156f70:
    // 0x156f70: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_156f74:
    if (ctx->pc == 0x156F74u) {
        ctx->pc = 0x156F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F70u;
        // 0x156f74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F78u;
        goto label_156f78;
    }
    ctx->pc = 0x156F70u;
    {
        const bool branch_taken_0x156f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f70) {
            ctx->pc = 0x156F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156F70u;
            // 0x156f74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x156F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f50;
        }
    }
    ctx->pc = 0x156F78u;
label_156f78:
    // 0x156f78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x156f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156f7c:
    // 0x156f7c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x156f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156f80:
    // 0x156f80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x156f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156f84:
    // 0x156f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_156f88:
    // 0x156f88: 0x3e00008  jr          $ra
label_156f8c:
    if (ctx->pc == 0x156F8Cu) {
        ctx->pc = 0x156F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F88u;
        // 0x156f8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156F90u;
        goto label_fallthrough_0x156f88;
    }
    ctx->pc = 0x156F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F88u;
        // 0x156f8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156f88:
    ctx->pc = 0x156F90u;
}
