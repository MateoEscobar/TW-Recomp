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

// Function: sub_001721C8
// Address: 0x1721c8 - 0x172258
void sub_001721C8_0x1721c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001721C8_0x1721c8");
#endif

    switch (ctx->pc) {
        case 0x1721f8u: goto label_1721f8;
        case 0x172218u: goto label_172218;
        default: break;
    }

    ctx->pc = 0x1721c8u;

    // 0x1721c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1721c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1721cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1721ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1721d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1721d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1721d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1721d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1721d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1721dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1721dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1721e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1721e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1721e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1721e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1721ec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1721ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721f0: 0xc05fd94  jal         func_17F650
    ctx->pc = 0x1721F0u;
    SET_GPR_U32(ctx, 31, 0x1721F8u);
    ctx->pc = 0x1721F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721F0u;
    // 0x1721f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F650u, 0x1721F0u, 0x1721F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721F8u;
label_1721f8:
    // 0x1721f8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1721fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1721fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172200: 0x24638a10  addiu       $v1, $v1, -0x75F0
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937104));
    // 0x172204: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x172204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172208: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x172208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x17220c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x17220cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172210: 0xc05cbfc  jal         func_172FF0
    ctx->pc = 0x172210u;
    SET_GPR_U32(ctx, 31, 0x172218u);
    ctx->pc = 0x172214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172210u;
    // 0x172214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172FF0u, 0x172210u, 0x172218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172218u;
label_172218:
    // 0x172218: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x172218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x17221c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17221cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172220: 0xa2030027  sb          $v1, 0x27($s0)
    ctx->pc = 0x172220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x172224: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x172224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x172228: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x172228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17222c: 0xa2030024  sb          $v1, 0x24($s0)
    ctx->pc = 0x17222cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x172230: 0xa2030025  sb          $v1, 0x25($s0)
    ctx->pc = 0x172230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x172234: 0xa2030026  sb          $v1, 0x26($s0)
    ctx->pc = 0x172234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x172238: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x172238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17223c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17223cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172240: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172244: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x172244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17224c: 0x3e00008  jr          $ra
    ctx->pc = 0x17224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17224Cu;
        // 0x172250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172254u;
    // 0x172254: 0x0  nop
    ctx->pc = 0x172254u;
    // NOP
    ctx->pc = 0x172258u;
}
