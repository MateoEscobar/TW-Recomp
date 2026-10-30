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

// Function: sub_002D2EB0
// Address: 0x2d2eb0 - 0x2d2f60
void sub_002D2EB0_0x2d2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2EB0_0x2d2eb0");
#endif

    switch (ctx->pc) {
        case 0x2d2eb0u: goto label_2d2eb0;
        case 0x2d2eb4u: goto label_2d2eb4;
        case 0x2d2eb8u: goto label_2d2eb8;
        case 0x2d2ebcu: goto label_2d2ebc;
        case 0x2d2ec0u: goto label_2d2ec0;
        case 0x2d2ec4u: goto label_2d2ec4;
        case 0x2d2ec8u: goto label_2d2ec8;
        case 0x2d2eccu: goto label_2d2ecc;
        case 0x2d2ed0u: goto label_2d2ed0;
        case 0x2d2ed4u: goto label_2d2ed4;
        case 0x2d2ed8u: goto label_2d2ed8;
        case 0x2d2edcu: goto label_2d2edc;
        case 0x2d2ee0u: goto label_2d2ee0;
        case 0x2d2ee4u: goto label_2d2ee4;
        case 0x2d2ee8u: goto label_2d2ee8;
        case 0x2d2eecu: goto label_2d2eec;
        case 0x2d2ef0u: goto label_2d2ef0;
        case 0x2d2ef4u: goto label_2d2ef4;
        case 0x2d2ef8u: goto label_2d2ef8;
        case 0x2d2efcu: goto label_2d2efc;
        case 0x2d2f00u: goto label_2d2f00;
        case 0x2d2f04u: goto label_2d2f04;
        case 0x2d2f08u: goto label_2d2f08;
        case 0x2d2f0cu: goto label_2d2f0c;
        case 0x2d2f10u: goto label_2d2f10;
        case 0x2d2f14u: goto label_2d2f14;
        case 0x2d2f18u: goto label_2d2f18;
        case 0x2d2f1cu: goto label_2d2f1c;
        case 0x2d2f20u: goto label_2d2f20;
        case 0x2d2f24u: goto label_2d2f24;
        case 0x2d2f28u: goto label_2d2f28;
        case 0x2d2f2cu: goto label_2d2f2c;
        case 0x2d2f30u: goto label_2d2f30;
        case 0x2d2f34u: goto label_2d2f34;
        case 0x2d2f38u: goto label_2d2f38;
        case 0x2d2f3cu: goto label_2d2f3c;
        case 0x2d2f40u: goto label_2d2f40;
        case 0x2d2f44u: goto label_2d2f44;
        case 0x2d2f48u: goto label_2d2f48;
        case 0x2d2f4cu: goto label_2d2f4c;
        case 0x2d2f50u: goto label_2d2f50;
        case 0x2d2f54u: goto label_2d2f54;
        case 0x2d2f58u: goto label_2d2f58;
        case 0x2d2f5cu: goto label_2d2f5c;
        default: break;
    }

    ctx->pc = 0x2d2eb0u;

label_2d2eb0:
    // 0x2d2eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d2eb4:
    // 0x2d2eb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2d2eb8:
    // 0x2d2eb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2d2ebc:
    // 0x2d2ebc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2d2ec0:
    // 0x2d2ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2d2ec4:
    // 0x2d2ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ec8:
    // 0x2d2ec8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d2ecc:
    // 0x2d2ecc: 0x24631410  addiu       $v1, $v1, 0x1410
    ctx->pc = 0x2d2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5136));
label_2d2ed0:
    // 0x2d2ed0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d2ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2d2ed4:
    // 0x2d2ed4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d2ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ed8:
    // 0x2d2ed8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2d2edc:
    // 0x2d2edc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2d2ee0:
    // 0x2d2ee0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2d2ee4:
    // 0x2d2ee4: 0xa2070017  sb          $a3, 0x17($s0)
    ctx->pc = 0x2d2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 7));
label_2d2ee8:
    // 0x2d2ee8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d2ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2d2eec:
    // 0x2d2eec: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d2eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2d2ef0:
    // 0x2d2ef0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2d2ef4:
    // 0x2d2ef4: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2d2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_2d2ef8:
    // 0x2d2ef8: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x2d2ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_2d2efc:
    // 0x2d2efc: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
label_2d2f00:
    if (ctx->pc == 0x2D2F00u) {
        ctx->pc = 0x2D2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EFCu;
        // 0x2d2f00: 0xa2000016  sb          $zero, 0x16($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2F04u;
        goto label_2d2f04;
    }
    ctx->pc = 0x2D2EFCu;
    {
        const bool branch_taken_0x2d2efc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EFCu;
        // 0x2d2f00: 0xa2000016  sb          $zero, 0x16($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2efc) {
            ctx->pc = 0x2D2F30u;
            goto label_2d2f30;
        }
    }
    ctx->pc = 0x2D2F04u;
label_2d2f04:
    // 0x2d2f04: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x2d2f04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2d2f08:
    // 0x2d2f08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2d2f0c:
    if (ctx->pc == 0x2D2F0Cu) {
        ctx->pc = 0x2D2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F08u;
        // 0x2d2f0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2F10u;
        goto label_2d2f10;
    }
    ctx->pc = 0x2D2F08u;
    {
        const bool branch_taken_0x2d2f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F08u;
        // 0x2d2f0c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f08) {
            ctx->pc = 0x2D2F30u;
            goto label_2d2f30;
        }
    }
    ctx->pc = 0x2D2F10u;
label_2d2f10:
    // 0x2d2f10: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2d2f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d2f14:
    // 0x2d2f14: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2d2f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d2f18:
    // 0x2d2f18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2d2f1c:
    // 0x2d2f1c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2d2f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2d2f20:
    // 0x2d2f20: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2d2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2d2f24:
    // 0x2d2f24: 0x40f809  jalr        $v0
label_2d2f28:
    if (ctx->pc == 0x2D2F28u) {
        ctx->pc = 0x2D2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F24u;
        // 0x2d2f28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2F2Cu;
        goto label_2d2f2c;
    }
    ctx->pc = 0x2D2F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2F2Cu);
        ctx->pc = 0x2D2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F24u;
        // 0x2d2f28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F24u, 0x2D2F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2F2Cu;
label_2d2f2c:
    // 0x2d2f2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2d2f30:
    // 0x2d2f30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d2f34:
    // 0x2d2f34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2f38:
    // 0x2d2f38: 0x2406029c  addiu       $a2, $zero, 0x29C
    ctx->pc = 0x2d2f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_2d2f3c:
    // 0x2d2f3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d2f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d2f40:
    // 0x2d2f40: 0xc042f0e  jal         func_10BC38
label_2d2f44:
    if (ctx->pc == 0x2D2F44u) {
        ctx->pc = 0x2D2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F40u;
        // 0x2d2f44: 0x24840468  addiu       $a0, $a0, 0x468 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2F48u;
        goto label_2d2f48;
    }
    ctx->pc = 0x2D2F40u;
    SET_GPR_U32(ctx, 31, 0x2D2F48u);
    ctx->pc = 0x2D2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2F40u;
    // 0x2d2f44: 0x24840468  addiu       $a0, $a0, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x2D2F40u, 0x2D2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F48u;
label_2d2f48:
    // 0x2d2f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d2f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d2f4c:
    // 0x2d2f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d2f50:
    // 0x2d2f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d2f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2f54:
    // 0x2d2f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d2f58:
    // 0x2d2f58: 0x3e00008  jr          $ra
label_2d2f5c:
    if (ctx->pc == 0x2D2F5Cu) {
        ctx->pc = 0x2D2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F58u;
        // 0x2d2f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2F60u;
        goto label_fallthrough_0x2d2f58;
    }
    ctx->pc = 0x2D2F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F58u;
        // 0x2d2f5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d2f58:
    ctx->pc = 0x2D2F60u;
}
