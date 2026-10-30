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

// Function: sub_002CE370
// Address: 0x2ce370 - 0x2ce3b8
void sub_002CE370_0x2ce370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE370_0x2ce370");
#endif

    switch (ctx->pc) {
        case 0x2ce39cu: goto label_2ce39c;
        default: break;
    }

    ctx->pc = 0x2ce370u;

    // 0x2ce370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce374: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2ce374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2ce378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ce378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ce37c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ce37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ce380: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2ce380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2ce384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce38c: 0x24a5c1f0  addiu       $a1, $a1, -0x3E10
    ctx->pc = 0x2ce38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951408));
    // 0x2ce390: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce394: 0xc0a72ee  jal         func_29CBB8
    ctx->pc = 0x2CE394u;
    SET_GPR_U32(ctx, 31, 0x2CE39Cu);
    ctx->pc = 0x2CE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE394u;
    // 0x2ce398: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2CE394u, 0x2CE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE39Cu;
label_2ce39c:
    // 0x2ce39c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2ce39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x2ce3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce3a4: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2ce3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ce3a8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2ce3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2ce3ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ce3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE3B0u;
        // 0x2ce3b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE3B8u;
}
