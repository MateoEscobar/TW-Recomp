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

// Function: sub_0041D510
// Address: 0x41d510 - 0x41d5e8
void sub_0041D510_0x41d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D510_0x41d510");
#endif

    switch (ctx->pc) {
        case 0x41d5bcu: goto label_41d5bc;
        default: break;
    }

    ctx->pc = 0x41d510u;

    // 0x41d510: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x41d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x41d514: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41d518: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x41d518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x41d51c: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x41d51cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x41d520: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x41d520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x41d524: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41d524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d528: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x41d528u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d52c: 0x8c4c489c  lw          $t4, 0x489C($v0)
    ctx->pc = 0x41d52cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x51489Cu));
    // 0x41d530: 0x93a600d0  lbu         $a2, 0xD0($sp)
    ctx->pc = 0x41d530u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x41d534: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x41d534u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d538: 0x93a900e8  lbu         $t1, 0xE8($sp)
    ctx->pc = 0x41d538u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x41d53c: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x41d53cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d540: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x41d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x41d544: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x41d544u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d548: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x41d54c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x41d54cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d550: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x41d550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x41d554: 0x258414d4  addiu       $a0, $t4, 0x14D4
    ctx->pc = 0x41d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 5332));
    // 0x41d558: 0x8fb500d8  lw          $s5, 0xD8($sp)
    ctx->pc = 0x41d558u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x41d55c: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x41d55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d560: 0x8fb400e0  lw          $s4, 0xE0($sp)
    ctx->pc = 0x41d560u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x41d564: 0x8fb600f0  lw          $s6, 0xF0($sp)
    ctx->pc = 0x41d564u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x41d568: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x41d568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x41d56c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x41d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x41d570: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x41d570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d574: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x41d574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x41d578: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x41d578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d57c: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x41d57cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x41d580: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x41d580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d584: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x41d584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x41d588: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x41d588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d58c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x41d58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x41d590: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x41d590u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d594: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x41d594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x41d598: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x41d598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d59c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x41d5a0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x41d5a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d5a4: 0xafb50020  sw          $s5, 0x20($sp)
    ctx->pc = 0x41d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
    // 0x41d5a8: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x41d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x41d5ac: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x41d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x41d5b0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x41d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x41d5b4: 0xc107c46  jal         func_41F118
    ctx->pc = 0x41D5B4u;
    SET_GPR_U32(ctx, 31, 0x41D5BCu);
    ctx->pc = 0x41D5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D5B4u;
    // 0x41d5b8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F118u, 0x41D5B4u, 0x41D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D5BCu;
label_41d5bc:
    // 0x41d5bc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x41d5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x41d5c0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x41d5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x41d5c4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x41d5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x41d5c8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x41d5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41d5cc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x41d5ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41d5d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x41d5d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41d5d4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x41d5d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41d5d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41d5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x41D5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D5DCu;
        // 0x41d5e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D5E4u;
    // 0x41d5e4: 0x0  nop
    ctx->pc = 0x41d5e4u;
    // NOP
    ctx->pc = 0x41d5e8u;
}
