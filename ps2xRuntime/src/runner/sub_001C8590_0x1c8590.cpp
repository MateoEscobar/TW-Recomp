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

// Function: sub_001C8590
// Address: 0x1c8590 - 0x1c8628
void sub_001C8590_0x1c8590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8590_0x1c8590");
#endif

    switch (ctx->pc) {
        case 0x1c85c0u: goto label_1c85c0;
        case 0x1c85e0u: goto label_1c85e0;
        case 0x1c860cu: goto label_1c860c;
        default: break;
    }

    ctx->pc = 0x1c8590u;

    // 0x1c8590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8594: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1c8598: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c8598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c859c: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1c859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1c85a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c85a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c85a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1c85a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1c85a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c85a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c85acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c85b0: 0x24525430  addiu       $s2, $v0, 0x5430
    ctx->pc = 0x1c85b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
    // 0x1c85b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c85b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85b8: 0xc139ccc  jal         func_4E7330
    ctx->pc = 0x1C85B8u;
    SET_GPR_U32(ctx, 31, 0x1C85C0u);
    ctx->pc = 0x1C85BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85B8u;
    // 0x1c85bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7330u, 0x1C85B8u, 0x1C85C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85C0u;
label_1c85c0:
    // 0x1c85c0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c85c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c85c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c85c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c85cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C85CCu;
    {
        const bool branch_taken_0x1c85cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C85D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C85CCu;
        // 0x1c85d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c85cc) {
            ctx->pc = 0x1C85FCu;
            goto label_1c85fc;
        }
    }
    ctx->pc = 0x1C85D4u;
    // 0x1c85d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c85d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c85d8: 0xc139a92  jal         func_4E6A48
    ctx->pc = 0x1C85D8u;
    SET_GPR_U32(ctx, 31, 0x1C85E0u);
    ctx->pc = 0x1C85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C85D8u;
    // 0x1c85dc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6A48u, 0x1C85D8u, 0x1C85E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85E0u;
label_1c85e0:
    // 0x1c85e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c85e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c85e4: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1c85e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x1c85e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c85e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c85ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c85f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c85f4: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1c85f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
    // 0x1c85f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1c85fc:
    // 0x1c85fc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1c85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c8600: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c8600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8604: 0xc139cf4  jal         func_4E73D0
    ctx->pc = 0x1C8604u;
    SET_GPR_U32(ctx, 31, 0x1C860Cu);
    ctx->pc = 0x1C8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8604u;
    // 0x1c8608: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E73D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E73D0u, 0x1C8604u, 0x1C860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C860Cu;
label_1c860c:
    // 0x1c860c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c860cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c8610: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c8610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8614: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c8614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8618: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1c8618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c861c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c861cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8620: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8620u;
        // 0x1c8624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8628u;
}
