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

// Function: sub_002B9618
// Address: 0x2b9618 - 0x2b96a8
void sub_002B9618_0x2b9618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9618_0x2b9618");
#endif

    switch (ctx->pc) {
        case 0x2b9638u: goto label_2b9638;
        case 0x2b9698u: goto label_2b9698;
        default: break;
    }

    ctx->pc = 0x2b9618u;

    // 0x2b9618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b961c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b961cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9620: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b9620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b9624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b9628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b962c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9630: 0xc0a22c6  jal         func_288B18
    ctx->pc = 0x2B9630u;
    SET_GPR_U32(ctx, 31, 0x2B9638u);
    ctx->pc = 0x2B9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9630u;
    // 0x2b9634: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2B9630u, 0x2B9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9638u;
label_2b9638:
    // 0x2b9638: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b963c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2b963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2b9640: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2b9640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2b9644: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2b9644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2b9648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b964c: 0x24841068  addiu       $a0, $a0, 0x1068
    ctx->pc = 0x2b964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4200));
    // 0x2b9650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b9650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b9654: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2b9654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    // 0x2b9658: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b9658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b965c: 0xac440208  sw          $a0, 0x208($v0)
    ctx->pc = 0x2b965cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 4));
    // 0x2b9660: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9664: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b9664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b9668: 0xdc8200e0  ld          $v0, 0xE0($a0)
    ctx->pc = 0x2b9668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2b966c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b9670: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2b9670u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x2b9674: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b9674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b9678: 0x8065000b  lb          $a1, 0xB($v1)
    ctx->pc = 0x2b9678u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2b967c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9680: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x2b9680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x2b9684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b9684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b9688: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2b9688u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2b968c: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x2b968cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b9690: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2B9690u;
    SET_GPR_U32(ctx, 31, 0x2B9698u);
    ctx->pc = 0x2B9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9690u;
    // 0x2b9694: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2B9690u, 0x2B9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9698u;
label_2b9698:
    // 0x2b9698: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b9698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b969c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b96a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B96A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96A0u;
        // 0x2b96a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B96A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B96A8u;
}
