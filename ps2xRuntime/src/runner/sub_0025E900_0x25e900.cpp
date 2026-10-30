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

// Function: sub_0025E900
// Address: 0x25e900 - 0x25e948
void sub_0025E900_0x25e900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E900_0x25e900");
#endif

    switch (ctx->pc) {
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        case 0x25e928u: goto label_25e928;
        case 0x25e92cu: goto label_25e92c;
        case 0x25e930u: goto label_25e930;
        case 0x25e934u: goto label_25e934;
        case 0x25e938u: goto label_25e938;
        case 0x25e93cu: goto label_25e93c;
        case 0x25e940u: goto label_25e940;
        case 0x25e944u: goto label_25e944;
        default: break;
    }

    ctx->pc = 0x25e900u;

label_25e900:
    // 0x25e900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25e904:
    // 0x25e904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25e904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e908:
    // 0x25e908: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25e90c:
    // 0x25e90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25e910:
    // 0x25e910: 0xc089c20  jal         func_227080
label_25e914:
    if (ctx->pc == 0x25E914u) {
        ctx->pc = 0x25E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E910u;
        // 0x25e914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E918u;
        goto label_25e918;
    }
    ctx->pc = 0x25E910u;
    SET_GPR_U32(ctx, 31, 0x25E918u);
    ctx->pc = 0x25E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E910u;
    // 0x25e914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x25E910u, 0x25E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E918u;
label_25e918:
    // 0x25e918: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25e91c:
    // 0x25e91c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x25e91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25e920:
    // 0x25e920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e924:
    // 0x25e924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e928:
    // 0x25e928: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x25e928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_25e92c:
    // 0x25e92c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x25e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_25e930:
    // 0x25e930: 0x40f809  jalr        $v0
label_25e934:
    if (ctx->pc == 0x25E934u) {
        ctx->pc = 0x25E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E930u;
        // 0x25e934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E938u;
        goto label_25e938;
    }
    ctx->pc = 0x25E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E938u);
        ctx->pc = 0x25E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E930u;
        // 0x25e934: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E930u, 0x25E938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E938u;
label_25e938:
    // 0x25e938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25e938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e93c:
    // 0x25e93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e940:
    // 0x25e940: 0x3e00008  jr          $ra
label_25e944:
    if (ctx->pc == 0x25E944u) {
        ctx->pc = 0x25E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E940u;
        // 0x25e944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E948u;
        goto label_fallthrough_0x25e940;
    }
    ctx->pc = 0x25E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E940u;
        // 0x25e944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e940:
    ctx->pc = 0x25E948u;
}
