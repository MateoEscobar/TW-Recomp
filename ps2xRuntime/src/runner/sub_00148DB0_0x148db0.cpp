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

// Function: sub_00148DB0
// Address: 0x148db0 - 0x148f60
void sub_00148DB0_0x148db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148DB0_0x148db0");
#endif

    switch (ctx->pc) {
        case 0x148db0u: goto label_148db0;
        case 0x148db4u: goto label_148db4;
        case 0x148db8u: goto label_148db8;
        case 0x148dbcu: goto label_148dbc;
        case 0x148dc0u: goto label_148dc0;
        case 0x148dc4u: goto label_148dc4;
        case 0x148dc8u: goto label_148dc8;
        case 0x148dccu: goto label_148dcc;
        case 0x148dd0u: goto label_148dd0;
        case 0x148dd4u: goto label_148dd4;
        case 0x148dd8u: goto label_148dd8;
        case 0x148ddcu: goto label_148ddc;
        case 0x148de0u: goto label_148de0;
        case 0x148de4u: goto label_148de4;
        case 0x148de8u: goto label_148de8;
        case 0x148decu: goto label_148dec;
        case 0x148df0u: goto label_148df0;
        case 0x148df4u: goto label_148df4;
        case 0x148df8u: goto label_148df8;
        case 0x148dfcu: goto label_148dfc;
        case 0x148e00u: goto label_148e00;
        case 0x148e04u: goto label_148e04;
        case 0x148e08u: goto label_148e08;
        case 0x148e0cu: goto label_148e0c;
        case 0x148e10u: goto label_148e10;
        case 0x148e14u: goto label_148e14;
        case 0x148e18u: goto label_148e18;
        case 0x148e1cu: goto label_148e1c;
        case 0x148e20u: goto label_148e20;
        case 0x148e24u: goto label_148e24;
        case 0x148e28u: goto label_148e28;
        case 0x148e2cu: goto label_148e2c;
        case 0x148e30u: goto label_148e30;
        case 0x148e34u: goto label_148e34;
        case 0x148e38u: goto label_148e38;
        case 0x148e3cu: goto label_148e3c;
        case 0x148e40u: goto label_148e40;
        case 0x148e44u: goto label_148e44;
        case 0x148e48u: goto label_148e48;
        case 0x148e4cu: goto label_148e4c;
        case 0x148e50u: goto label_148e50;
        case 0x148e54u: goto label_148e54;
        case 0x148e58u: goto label_148e58;
        case 0x148e5cu: goto label_148e5c;
        case 0x148e60u: goto label_148e60;
        case 0x148e64u: goto label_148e64;
        case 0x148e68u: goto label_148e68;
        case 0x148e6cu: goto label_148e6c;
        case 0x148e70u: goto label_148e70;
        case 0x148e74u: goto label_148e74;
        case 0x148e78u: goto label_148e78;
        case 0x148e7cu: goto label_148e7c;
        case 0x148e80u: goto label_148e80;
        case 0x148e84u: goto label_148e84;
        case 0x148e88u: goto label_148e88;
        case 0x148e8cu: goto label_148e8c;
        case 0x148e90u: goto label_148e90;
        case 0x148e94u: goto label_148e94;
        case 0x148e98u: goto label_148e98;
        case 0x148e9cu: goto label_148e9c;
        case 0x148ea0u: goto label_148ea0;
        case 0x148ea4u: goto label_148ea4;
        case 0x148ea8u: goto label_148ea8;
        case 0x148eacu: goto label_148eac;
        case 0x148eb0u: goto label_148eb0;
        case 0x148eb4u: goto label_148eb4;
        case 0x148eb8u: goto label_148eb8;
        case 0x148ebcu: goto label_148ebc;
        case 0x148ec0u: goto label_148ec0;
        case 0x148ec4u: goto label_148ec4;
        case 0x148ec8u: goto label_148ec8;
        case 0x148eccu: goto label_148ecc;
        case 0x148ed0u: goto label_148ed0;
        case 0x148ed4u: goto label_148ed4;
        case 0x148ed8u: goto label_148ed8;
        case 0x148edcu: goto label_148edc;
        case 0x148ee0u: goto label_148ee0;
        case 0x148ee4u: goto label_148ee4;
        case 0x148ee8u: goto label_148ee8;
        case 0x148eecu: goto label_148eec;
        case 0x148ef0u: goto label_148ef0;
        case 0x148ef4u: goto label_148ef4;
        case 0x148ef8u: goto label_148ef8;
        case 0x148efcu: goto label_148efc;
        case 0x148f00u: goto label_148f00;
        case 0x148f04u: goto label_148f04;
        case 0x148f08u: goto label_148f08;
        case 0x148f0cu: goto label_148f0c;
        case 0x148f10u: goto label_148f10;
        case 0x148f14u: goto label_148f14;
        case 0x148f18u: goto label_148f18;
        case 0x148f1cu: goto label_148f1c;
        case 0x148f20u: goto label_148f20;
        case 0x148f24u: goto label_148f24;
        case 0x148f28u: goto label_148f28;
        case 0x148f2cu: goto label_148f2c;
        case 0x148f30u: goto label_148f30;
        case 0x148f34u: goto label_148f34;
        case 0x148f38u: goto label_148f38;
        case 0x148f3cu: goto label_148f3c;
        case 0x148f40u: goto label_148f40;
        case 0x148f44u: goto label_148f44;
        case 0x148f48u: goto label_148f48;
        case 0x148f4cu: goto label_148f4c;
        case 0x148f50u: goto label_148f50;
        case 0x148f54u: goto label_148f54;
        case 0x148f58u: goto label_148f58;
        case 0x148f5cu: goto label_148f5c;
        default: break;
    }

    ctx->pc = 0x148db0u;

label_148db0:
    // 0x148db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x148db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_148db4:
    // 0x148db4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x148db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_148db8:
    // 0x148db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148dbc:
    // 0x148dbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x148dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_148dc0:
    // 0x148dc0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x148dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_148dc4:
    // 0x148dc4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x148dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_148dc8:
    // 0x148dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148dcc:
    // 0x148dcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x148dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_148dd0:
    // 0x148dd0: 0x2484e240  addiu       $a0, $a0, -0x1DC0
    ctx->pc = 0x148dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959680));
label_148dd4:
    // 0x148dd4: 0xc052534  jal         func_1494D0
label_148dd8:
    if (ctx->pc == 0x148DD8u) {
        ctx->pc = 0x148DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DD4u;
        // 0x148dd8: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148DDCu;
        goto label_148ddc;
    }
    ctx->pc = 0x148DD4u;
    SET_GPR_U32(ctx, 31, 0x148DDCu);
    ctx->pc = 0x148DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148DD4u;
    // 0x148dd8: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1494D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1494D0u, 0x148DD4u, 0x148DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148DDCu;
label_148ddc:
    // 0x148ddc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_148de0:
    if (ctx->pc == 0x148DE0u) {
        ctx->pc = 0x148DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DDCu;
        // 0x148de0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148DE4u;
        goto label_148de4;
    }
    ctx->pc = 0x148DDCu;
    {
        const bool branch_taken_0x148ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x148DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DDCu;
        // 0x148de0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ddc) {
            ctx->pc = 0x148E18u;
            goto label_148e18;
        }
    }
    ctx->pc = 0x148DE4u;
label_148de4:
    // 0x148de4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_148de8:
    // 0x148de8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x148de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_148dec:
    // 0x148dec: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x148decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_148df0:
    // 0x148df0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x148df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_148df4:
    // 0x148df4: 0xc0f809  jalr        $a2
label_148df8:
    if (ctx->pc == 0x148DF8u) {
        ctx->pc = 0x148DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DF4u;
        // 0x148df8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148DFCu;
        goto label_148dfc;
    }
    ctx->pc = 0x148DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x148DFCu);
        ctx->pc = 0x148DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148DF4u;
        // 0x148df8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148DF4u, 0x148DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148DFCu;
label_148dfc:
    // 0x148dfc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x148dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_148e00:
    // 0x148e00: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_148e04:
    // 0x148e04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x148e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_148e08:
    // 0x148e08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x148e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_148e0c:
    // 0x148e0c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x148e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_148e10:
    // 0x148e10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x148e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_148e14:
    // 0x148e14: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x148e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_148e18:
    // 0x148e18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x148e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_148e1c:
    // 0x148e1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x148e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148e20:
    // 0x148e20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x148e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148e24:
    // 0x148e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148e28:
    // 0x148e28: 0x3e00008  jr          $ra
label_148e2c:
    if (ctx->pc == 0x148E2Cu) {
        ctx->pc = 0x148E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E28u;
        // 0x148e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148E30u;
        goto label_148e30;
    }
    ctx->pc = 0x148E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E28u;
        // 0x148e2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148E30u;
label_148e30:
    // 0x148e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_148e34:
    // 0x148e34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_148e38:
    // 0x148e38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_148e3c:
    // 0x148e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148e40:
    // 0x148e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148e44:
    // 0x148e44: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x148e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_148e48:
    // 0x148e48: 0xc10c4de  jal         func_431378
label_148e4c:
    if (ctx->pc == 0x148E4Cu) {
        ctx->pc = 0x148E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E48u;
        // 0x148e4c: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148E50u;
        goto label_148e50;
    }
    ctx->pc = 0x148E48u;
    SET_GPR_U32(ctx, 31, 0x148E50u);
    ctx->pc = 0x148E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148E48u;
    // 0x148e4c: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x148E48u, 0x148E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148E50u;
label_148e50:
    // 0x148e50: 0x2604ffff  addiu       $a0, $s0, -0x1
    ctx->pc = 0x148e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_148e54:
    // 0x148e54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x148e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_148e58:
    // 0x148e58: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x148e58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_148e5c:
    // 0x148e5c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_148e60:
    if (ctx->pc == 0x148E60u) {
        ctx->pc = 0x148E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E5Cu;
        // 0x148e60: 0xac50b7a8  sw          $s0, -0x4858($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948776), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148E64u;
        goto label_148e64;
    }
    ctx->pc = 0x148E5Cu;
    {
        const bool branch_taken_0x148e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E5Cu;
        // 0x148e60: 0xac50b7a8  sw          $s0, -0x4858($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948776), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e5c) {
            ctx->pc = 0x148EE8u;
            goto label_148ee8;
        }
    }
    ctx->pc = 0x148E64u;
label_148e64:
    // 0x148e64: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_148e68:
    // 0x148e68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x148e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_148e6c:
    // 0x148e6c: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x148e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
label_148e70:
    // 0x148e70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_148e74:
    // 0x148e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_148e78:
    // 0x148e78: 0x800008  jr          $a0
label_148e7c:
    if (ctx->pc == 0x148E7Cu) {
        ctx->pc = 0x148E80u;
        goto label_148e80;
    }
    ctx->pc = 0x148E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148E80u: goto label_148e80;
            case 0x148E94u: goto label_148e94;
            case 0x148EA8u: goto label_148ea8;
            case 0x148EBCu: goto label_148ebc;
            case 0x148EE8u: goto label_148ee8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148E80u;
label_148e80:
    // 0x148e80: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_148e84:
    // 0x148e84: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x148e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_148e88:
    // 0x148e88: 0xdc46a230  ld          $a2, -0x5DD0($v0)
    ctx->pc = 0x148e88u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294943280)));
label_148e8c:
    // 0x148e8c: 0x1000000f  b           . + 4 + (0xF << 2)
label_148e90:
    if (ctx->pc == 0x148E90u) {
        ctx->pc = 0x148E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E8Cu;
        // 0x148e90: 0x2443a230  addiu       $v1, $v0, -0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148E94u;
        goto label_148e94;
    }
    ctx->pc = 0x148E8Cu;
    {
        const bool branch_taken_0x148e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148E8Cu;
        // 0x148e90: 0x2443a230  addiu       $v1, $v0, -0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148e8c) {
            ctx->pc = 0x148ECCu;
            goto label_148ecc;
        }
    }
    ctx->pc = 0x148E94u;
label_148e94:
    // 0x148e94: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_148e98:
    // 0x148e98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x148e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_148e9c:
    // 0x148e9c: 0xdc46a240  ld          $a2, -0x5DC0($v0)
    ctx->pc = 0x148e9cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294943296)));
label_148ea0:
    // 0x148ea0: 0x1000000a  b           . + 4 + (0xA << 2)
label_148ea4:
    if (ctx->pc == 0x148EA4u) {
        ctx->pc = 0x148EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EA0u;
        // 0x148ea4: 0x2443a240  addiu       $v1, $v0, -0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148EA8u;
        goto label_148ea8;
    }
    ctx->pc = 0x148EA0u;
    {
        const bool branch_taken_0x148ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EA0u;
        // 0x148ea4: 0x2443a240  addiu       $v1, $v0, -0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ea0) {
            ctx->pc = 0x148ECCu;
            goto label_148ecc;
        }
    }
    ctx->pc = 0x148EA8u;
label_148ea8:
    // 0x148ea8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_148eac:
    // 0x148eac: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x148eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_148eb0:
    // 0x148eb0: 0xdc46a250  ld          $a2, -0x5DB0($v0)
    ctx->pc = 0x148eb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294943312)));
label_148eb4:
    // 0x148eb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_148eb8:
    if (ctx->pc == 0x148EB8u) {
        ctx->pc = 0x148EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EB4u;
        // 0x148eb8: 0x2443a250  addiu       $v1, $v0, -0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148EBCu;
        goto label_148ebc;
    }
    ctx->pc = 0x148EB4u;
    {
        const bool branch_taken_0x148eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EB4u;
        // 0x148eb8: 0x2443a250  addiu       $v1, $v0, -0x5DB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148eb4) {
            ctx->pc = 0x148ECCu;
            goto label_148ecc;
        }
    }
    ctx->pc = 0x148EBCu;
label_148ebc:
    // 0x148ebc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_148ec0:
    // 0x148ec0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x148ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_148ec4:
    // 0x148ec4: 0xdc46a260  ld          $a2, -0x5DA0($v0)
    ctx->pc = 0x148ec4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294943328)));
label_148ec8:
    // 0x148ec8: 0x2443a260  addiu       $v1, $v0, -0x5DA0
    ctx->pc = 0x148ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943328));
label_148ecc:
    // 0x148ecc: 0x9067000c  lbu         $a3, 0xC($v1)
    ctx->pc = 0x148eccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_148ed0:
    // 0x148ed0: 0x24a2b7b0  addiu       $v0, $a1, -0x4850
    ctx->pc = 0x148ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948784));
label_148ed4:
    // 0x148ed4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x148ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_148ed8:
    // 0x148ed8: 0xfca6b7b0  sd          $a2, -0x4850($a1)
    ctx->pc = 0x148ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294948784), GPR_U64(ctx, 6));
label_148edc:
    // 0x148edc: 0xa047000c  sb          $a3, 0xC($v0)
    ctx->pc = 0x148edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 7));
label_148ee0:
    // 0x148ee0: 0x10000005  b           . + 4 + (0x5 << 2)
label_148ee4:
    if (ctx->pc == 0x148EE4u) {
        ctx->pc = 0x148EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EE0u;
        // 0x148ee4: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148EE8u;
        goto label_148ee8;
    }
    ctx->pc = 0x148EE0u;
    {
        const bool branch_taken_0x148ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148EE0u;
        // 0x148ee4: 0xac440008  sw          $a0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ee0) {
            ctx->pc = 0x148EF8u;
            goto label_148ef8;
        }
    }
    ctx->pc = 0x148EE8u;
label_148ee8:
    // 0x148ee8: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_148eec:
    // 0x148eec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x148eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_148ef0:
    // 0x148ef0: 0x9043a270  lbu         $v1, -0x5D90($v0)
    ctx->pc = 0x148ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943344)));
label_148ef4:
    // 0x148ef4: 0xa083b7b0  sb          $v1, -0x4850($a0)
    ctx->pc = 0x148ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294948784), (uint8_t)GPR_U32(ctx, 3));
label_148ef8:
    // 0x148ef8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x148ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148efc:
    // 0x148efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148f00:
    // 0x148f00: 0x3e00008  jr          $ra
label_148f04:
    if (ctx->pc == 0x148F04u) {
        ctx->pc = 0x148F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F00u;
        // 0x148f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148F08u;
        goto label_148f08;
    }
    ctx->pc = 0x148F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F00u;
        // 0x148f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148F08u;
label_148f08:
    // 0x148f08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x148f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_148f0c:
    // 0x148f0c: 0x0  nop
    ctx->pc = 0x148f0cu;
    // NOP
label_148f10:
    // 0x148f10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x148f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_148f14:
    // 0x148f14: 0x0  nop
    ctx->pc = 0x148f14u;
    // NOP
label_148f18:
    // 0x148f18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x148f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_148f1c:
    // 0x148f1c: 0x0  nop
    ctx->pc = 0x148f1cu;
    // NOP
label_148f20:
    // 0x148f20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_148f24:
    // 0x148f24: 0x0  nop
    ctx->pc = 0x148f24u;
    // NOP
label_148f28:
    // 0x148f28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x148f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_148f2c:
    // 0x148f2c: 0x0  nop
    ctx->pc = 0x148f2cu;
    // NOP
label_148f30:
    // 0x148f30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x148f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_148f34:
    // 0x148f34: 0x0  nop
    ctx->pc = 0x148f34u;
    // NOP
label_148f38:
    // 0x148f38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x148f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_148f3c:
    // 0x148f3c: 0x0  nop
    ctx->pc = 0x148f3cu;
    // NOP
label_148f40:
    // 0x148f40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_148f44:
    // 0x148f44: 0x0  nop
    ctx->pc = 0x148f44u;
    // NOP
label_148f48:
    // 0x148f48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x148f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_148f4c:
    // 0x148f4c: 0x0  nop
    ctx->pc = 0x148f4cu;
    // NOP
label_148f50:
    // 0x148f50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x148f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_148f54:
    // 0x148f54: 0x0  nop
    ctx->pc = 0x148f54u;
    // NOP
label_148f58:
    // 0x148f58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x148f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_148f5c:
    // 0x148f5c: 0x0  nop
    ctx->pc = 0x148f5cu;
    // NOP
    ctx->pc = 0x148f60u;
}
