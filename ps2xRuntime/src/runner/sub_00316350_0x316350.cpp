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

// Function: sub_00316350
// Address: 0x316350 - 0x316450
void sub_00316350_0x316350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316350_0x316350");
#endif

    switch (ctx->pc) {
        case 0x3163a4u: goto label_3163a4;
        case 0x3163b4u: goto label_3163b4;
        case 0x3163ccu: goto label_3163cc;
        case 0x316410u: goto label_316410;
        case 0x31641cu: goto label_31641c;
        default: break;
    }

    ctx->pc = 0x316350u;

    // 0x316350: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x316350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x316354: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316358: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x316358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x31635c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31635cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316360: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x316360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x316364: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x316364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316368: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x316368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x31636c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x31636cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316370: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x316370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x316374: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x316374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316378: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x316378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x31637c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x31637cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316380: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x316380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x316384: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x316384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316388: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x316388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x31638c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x31638cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316390: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x316390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x316394: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x316394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x316398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31639c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31639Cu;
    SET_GPR_U32(ctx, 31, 0x3163A4u);
    ctx->pc = 0x3163A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31639Cu;
    // 0x3163a0: 0x140f02d  daddu       $fp, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31639Cu, 0x3163A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163A4u;
label_3163a4:
    // 0x3163a4: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x3163a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3163a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3163a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163ac: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3163ACu;
    SET_GPR_U32(ctx, 31, 0x3163B4u);
    ctx->pc = 0x3163B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3163ACu;
    // 0x3163b0: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3163ACu, 0x3163B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163B4u;
label_3163b4:
    // 0x3163b4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3163B4u;
    {
        const bool branch_taken_0x3163b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163B4u;
        // 0x3163b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163b4) {
            ctx->pc = 0x31641Cu;
            goto label_31641c;
        }
    }
    ctx->pc = 0x3163BCu;
    // 0x3163bc: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x3163BCu;
    {
        const bool branch_taken_0x3163bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163BCu;
        // 0x3163c0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163bc) {
            ctx->pc = 0x316420u;
            goto label_316420;
        }
    }
    ctx->pc = 0x3163C4u;
    // 0x3163c4: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3163C4u;
    SET_GPR_U32(ctx, 31, 0x3163CCu);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3163C4u, 0x3163CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3163CCu;
label_3163cc:
    // 0x3163cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3163ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163d0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3163D0u;
    {
        const bool branch_taken_0x3163d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3163D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163D0u;
        // 0x3163d4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163d0) {
            ctx->pc = 0x316410u;
            goto label_316410;
        }
    }
    ctx->pc = 0x3163D8u;
    // 0x3163d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3163d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3163dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3163dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3163e0: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x3163e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x3163e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3163e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3163e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3163e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163ec: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3163ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x3163f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3163f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163f4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3163f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163f8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3163f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3163fc: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x3163fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316400: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x316400u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316408: 0xc0c1b1a  jal         func_306C68
    ctx->pc = 0x316408u;
    SET_GPR_U32(ctx, 31, 0x316410u);
    ctx->pc = 0x31640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316408u;
    // 0x31640c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306C68u, 0x316408u, 0x316410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316410u;
label_316410:
    // 0x316410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316414: 0xc059590  jal         func_165640
    ctx->pc = 0x316414u;
    SET_GPR_U32(ctx, 31, 0x31641Cu);
    ctx->pc = 0x316418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316414u;
    // 0x316418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316414u, 0x31641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31641Cu;
label_31641c:
    // 0x31641c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x31641cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_316420:
    // 0x316420: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x316420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316424: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x316424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316428: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x316428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31642c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x31642cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316430: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x316430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316434: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x316434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316438: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x316438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31643c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x31643cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316444: 0x3e00008  jr          $ra
    ctx->pc = 0x316444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316444u;
        // 0x316448: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31644Cu;
    // 0x31644c: 0x0  nop
    ctx->pc = 0x31644cu;
    // NOP
    ctx->pc = 0x316450u;
}
