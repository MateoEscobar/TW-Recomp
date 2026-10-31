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

// Function: sub_001CABC0
// Address: 0x1cabc0 - 0x1cac78
void sub_001CABC0_0x1cabc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CABC0_0x1cabc0");
#endif

    switch (ctx->pc) {
        case 0x1cabdcu: goto label_1cabdc;
        case 0x1cac04u: goto label_1cac04;
        case 0x1cac54u: goto label_1cac54;
        case 0x1cac60u: goto label_1cac60;
        default: break;
    }

    ctx->pc = 0x1cabc0u;

    // 0x1cabc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cabc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cabc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cabc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cabc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cabcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cabd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cabd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cabd4: 0xc072b1e  jal         func_1CAC78
    ctx->pc = 0x1CABD4u;
    SET_GPR_U32(ctx, 31, 0x1CABDCu);
    ctx->pc = 0x1CABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABD4u;
    // 0x1cabd8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC78u, 0x1CABD4u, 0x1CABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABDCu;
label_1cabdc:
    // 0x1cabdc: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1cabdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1cabe0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cabe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cabe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cabe8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cabe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cabec: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x1cabecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1cabf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cabf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cabf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabf8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cabfc: 0xc0705ce  jal         func_1C1738
    ctx->pc = 0x1CABFCu;
    SET_GPR_U32(ctx, 31, 0x1CAC04u);
    ctx->pc = 0x1CAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CABFCu;
    // 0x1cac00: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1738u, 0x1CABFCu, 0x1CAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC04u;
label_1cac04:
    // 0x1cac04: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1cac08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cac0c: 0x8c83ea74  lw          $v1, -0x158C($a0)
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50EA74u));
    // 0x1cac10: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CAC10u;
    {
        const bool branch_taken_0x1cac10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC10u;
        // 0x1cac14: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cac10) {
            ctx->pc = 0x1CAC60u;
            goto label_1cac60;
        }
    }
    ctx->pc = 0x1CAC18u;
    // 0x1cac18: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cac1c: 0x80650001  lb          $a1, 0x1($v1)
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1cac20: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1cac20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cac24: 0xa2250011  sb          $a1, 0x11($s1)
    ctx->pc = 0x1cac24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cac28: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1cac2c: 0x8c83ea74  lw          $v1, -0x158C($a0)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961780)));
    // 0x1cac30: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x1cac30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cac34: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x1cac34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1cac38: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1cac3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cac40: 0xae25001c  sw          $a1, 0x1C($s1)
    ctx->pc = 0x1cac40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 5));
    // 0x1cac44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cac48: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1cac48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x1cac4c: 0xc1062b6  jal         func_418AD8
    ctx->pc = 0x1CAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC54u);
    ctx->pc = 0x1CAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC4Cu;
    // 0x1cac50: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AD8u, 0x1CAC4Cu, 0x1CAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC54u;
label_1cac54:
    // 0x1cac54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cac58: 0xc072b30  jal         func_1CACC0
    ctx->pc = 0x1CAC58u;
    SET_GPR_U32(ctx, 31, 0x1CAC60u);
    ctx->pc = 0x1CAC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC58u;
    // 0x1cac5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CACC0u, 0x1CAC58u, 0x1CAC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC60u;
label_1cac60:
    // 0x1cac60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cac60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cac64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cac64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cac68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cac68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cac6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAC6Cu;
        // 0x1cac70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAC74u;
    // 0x1cac74: 0x0  nop
    ctx->pc = 0x1cac74u;
    // NOP
    ctx->pc = 0x1cac78u;
}
