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

// Function: sub_001BC530
// Address: 0x1bc530 - 0x1bc5a8
void sub_001BC530_0x1bc530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC530_0x1bc530");
#endif

    switch (ctx->pc) {
        case 0x1bc554u: goto label_1bc554;
        case 0x1bc58cu: goto label_1bc58c;
        default: break;
    }

    ctx->pc = 0x1bc530u;

    // 0x1bc530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc534: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1bc534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bc538: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc53c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bc53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bc540: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bc540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1bc544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc54c: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1BC54Cu;
    SET_GPR_U32(ctx, 31, 0x1BC554u);
    ctx->pc = 0x1BC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC54Cu;
    // 0x1bc550: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1BC54Cu, 0x1BC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC554u;
label_1bc554:
    // 0x1bc554: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc558: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1bc55c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc560: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1bc560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc564: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1bc564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x1bc568: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1bc568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x1bc56c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc570: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc574: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc578: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc57c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bc57cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc580: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc584: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1BC584u;
    SET_GPR_U32(ctx, 31, 0x1BC58Cu);
    ctx->pc = 0x1BC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC584u;
    // 0x1bc588: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1BC584u, 0x1BC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC58Cu;
label_1bc58c:
    // 0x1bc58c: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x1bc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x1bc590: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC59Cu;
        // 0x1bc5a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC5A4u;
    // 0x1bc5a4: 0x0  nop
    ctx->pc = 0x1bc5a4u;
    // NOP
    ctx->pc = 0x1bc5a8u;
}
