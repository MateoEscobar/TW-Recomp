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

// Function: sub_003F53B0
// Address: 0x3f53b0 - 0x3f5418
void sub_003F53B0_0x3f53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F53B0_0x3f53b0");
#endif

    switch (ctx->pc) {
        case 0x3f53d8u: goto label_3f53d8;
        case 0x3f53e4u: goto label_3f53e4;
        case 0x3f53f4u: goto label_3f53f4;
        case 0x3f53fcu: goto label_3f53fc;
        default: break;
    }

    ctx->pc = 0x3f53b0u;

    // 0x3f53b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f53b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f53b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f53b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3f53b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f53bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f53bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f53c0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3f53c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3f53c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f53c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3f53c8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3f53c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3f53cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f53ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f53d0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3F53D0u;
    SET_GPR_U32(ctx, 31, 0x3F53D8u);
    ctx->pc = 0x3F53D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53D0u;
    // 0x3f53d4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3F53D0u, 0x3F53D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53D8u;
label_3f53d8:
    // 0x3f53d8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3f53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f53dc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3F53DCu;
    SET_GPR_U32(ctx, 31, 0x3F53E4u);
    ctx->pc = 0x3F53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53DCu;
    // 0x3f53e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3F53DCu, 0x3F53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53E4u;
label_3f53e4:
    // 0x3f53e4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3f53e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3f53e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f53e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f53ec: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3F53ECu;
    SET_GPR_U32(ctx, 31, 0x3F53F4u);
    ctx->pc = 0x3F53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53ECu;
    // 0x3f53f0: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3F53ECu, 0x3F53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53F4u;
label_3f53f4:
    // 0x3f53f4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3F53F4u;
    SET_GPR_U32(ctx, 31, 0x3F53FCu);
    ctx->pc = 0x3F53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F53F4u;
    // 0x3f53f8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3F53F4u, 0x3F53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F53FCu;
label_3f53fc:
    // 0x3f53fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f53fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f5400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f5400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f5404: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f5404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f5408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f5408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f540c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F540Cu;
        // 0x3f5410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F540Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F5414u;
    // 0x3f5414: 0x0  nop
    ctx->pc = 0x3f5414u;
    // NOP
    ctx->pc = 0x3f5418u;
}
