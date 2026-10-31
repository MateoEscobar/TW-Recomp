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

// Function: sub_001BC4B8
// Address: 0x1bc4b8 - 0x1bc530
void sub_001BC4B8_0x1bc4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC4B8_0x1bc4b8");
#endif

    switch (ctx->pc) {
        case 0x1bc4dcu: goto label_1bc4dc;
        case 0x1bc514u: goto label_1bc514;
        default: break;
    }

    ctx->pc = 0x1bc4b8u;

    // 0x1bc4b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc4bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1bc4c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc4c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bc4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bc4c8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1bc4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc4d4: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1BC4D4u;
    SET_GPR_U32(ctx, 31, 0x1BC4DCu);
    ctx->pc = 0x1BC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4D4u;
    // 0x1bc4d8: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1BC4D4u, 0x1BC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4DCu;
label_1bc4dc:
    // 0x1bc4dc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc4e0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1bc4e4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc4e8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1bc4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc4ec: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1bc4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x1bc4f0: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1bc4f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x1bc4f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc4f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4fc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc504: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bc504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc508: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1bc508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc50c: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1BC50Cu;
    SET_GPR_U32(ctx, 31, 0x1BC514u);
    ctx->pc = 0x1BC510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC50Cu;
    // 0x1bc510: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1BC50Cu, 0x1BC514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC514u;
label_1bc514:
    // 0x1bc514: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x1bc514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x1bc518: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc51c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc524: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC524u;
        // 0x1bc528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC52Cu;
    // 0x1bc52c: 0x0  nop
    ctx->pc = 0x1bc52cu;
    // NOP
    ctx->pc = 0x1bc530u;
}
