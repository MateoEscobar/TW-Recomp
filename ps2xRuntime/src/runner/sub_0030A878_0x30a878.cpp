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

// Function: sub_0030A878
// Address: 0x30a878 - 0x30a9a0
void sub_0030A878_0x30a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A878_0x30a878");
#endif

    switch (ctx->pc) {
        case 0x30a8f0u: goto label_30a8f0;
        case 0x30a908u: goto label_30a908;
        case 0x30a958u: goto label_30a958;
        case 0x30a964u: goto label_30a964;
        default: break;
    }

    ctx->pc = 0x30a878u;

    // 0x30a878: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x30a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x30a87c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x30a87cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x30a880: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x30a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x30a884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30a888: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x30a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x30a88c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x30a88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a890: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x30a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x30a894: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x30a894u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x30a898: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30a89c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30a89cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8a0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x30a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x30a8a4: 0x3115ffff  andi        $s5, $t0, 0xFFFF
    ctx->pc = 0x30a8a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x30a8a8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x30a8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x30a8ac: 0x3136ffff  andi        $s6, $t1, 0xFFFF
    ctx->pc = 0x30a8acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x30a8b0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x30a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x30a8b4: 0x3157ffff  andi        $s7, $t2, 0xFFFF
    ctx->pc = 0x30a8b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x30a8b8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x30a8b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30a8bc: 0x7f403  sra         $fp, $a3, 16
    ctx->pc = 0x30a8bcu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 7), 16));
    // 0x30a8c0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x30a8c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x30a8c4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x30a8c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x30a8c8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x30a8c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x30a8cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30a8ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x30a8d0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x30a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x30a8d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30a8d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30a8d8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x30a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x30a8dc: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30A8DCu;
    {
        const bool branch_taken_0x30a8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8DCu;
        // 0x30a8e0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8dc) {
            ctx->pc = 0x30A964u;
            goto label_30a964;
        }
    }
    ctx->pc = 0x30A8E4u;
    // 0x30a8e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x30a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30a8e8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30A8E8u;
    SET_GPR_U32(ctx, 31, 0x30A8F0u);
    ctx->pc = 0x30A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A8E8u;
    // 0x30a8ec: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30A8E8u, 0x30A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8F0u;
label_30a8f0:
    // 0x30a8f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30a8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x30a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30a8f8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30A8F8u;
    {
        const bool branch_taken_0x30a8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A8F8u;
        // 0x30a8fc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8f8) {
            ctx->pc = 0x30A968u;
            goto label_30a968;
        }
    }
    ctx->pc = 0x30A900u;
    // 0x30a900: 0xc0c1956  jal         func_306558
    ctx->pc = 0x30A900u;
    SET_GPR_U32(ctx, 31, 0x30A908u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x30A900u, 0x30A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A908u;
label_30a908:
    // 0x30a908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a90c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30A90Cu;
    {
        const bool branch_taken_0x30a90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A90Cu;
        // 0x30a910: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a90c) {
            ctx->pc = 0x30A958u;
            goto label_30a958;
        }
    }
    ctx->pc = 0x30A914u;
    // 0x30a914: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30a914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x30a918: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30a918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30a91c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x30a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x30a920: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x30a920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x30a924: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x30a924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a928: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x30a928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x30a92c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30a92cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30a930: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x30a930u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x30a934: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x30a934u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x30a938: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x30a938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a93c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x30a93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a940: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x30a940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a944: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x30a944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a948: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x30a948u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a950: 0xc0c2a68  jal         func_30A9A0
    ctx->pc = 0x30A950u;
    SET_GPR_U32(ctx, 31, 0x30A958u);
    ctx->pc = 0x30A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A950u;
    // 0x30a954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A9A0u, 0x30A950u, 0x30A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A958u;
label_30a958:
    // 0x30a958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a95c: 0xc059590  jal         func_165640
    ctx->pc = 0x30A95Cu;
    SET_GPR_U32(ctx, 31, 0x30A964u);
    ctx->pc = 0x30A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A95Cu;
    // 0x30a960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x30A95Cu, 0x30A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A964u;
label_30a964:
    // 0x30a964: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x30a964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_30a968:
    // 0x30a968: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x30a968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30a96c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x30a96cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30a970: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x30a970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30a974: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x30a974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30a978: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30a978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30a97c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x30a97cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30a980: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x30a980u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a984: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x30a984u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a988: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a98c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x30a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30a990: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x30a990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30a994: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x30a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30a998: 0x3e00008  jr          $ra
    ctx->pc = 0x30A998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A998u;
        // 0x30a99c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A9A0u;
}
