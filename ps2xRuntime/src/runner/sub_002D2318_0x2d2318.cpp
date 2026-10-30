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

// Function: sub_002D2318
// Address: 0x2d2318 - 0x2d23e8
void sub_002D2318_0x2d2318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2318_0x2d2318");
#endif

    switch (ctx->pc) {
        case 0x2d2350u: goto label_2d2350;
        case 0x2d2358u: goto label_2d2358;
        case 0x2d236cu: goto label_2d236c;
        case 0x2d237cu: goto label_2d237c;
        case 0x2d238cu: goto label_2d238c;
        case 0x2d2394u: goto label_2d2394;
        case 0x2d23b8u: goto label_2d23b8;
        case 0x2d23c4u: goto label_2d23c4;
        default: break;
    }

    ctx->pc = 0x2d2318u;

    // 0x2d2318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d231c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2320: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2d2320u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2d2324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d2324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2328: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d2328u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d232c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2d232cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2d2330: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d2330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d2334: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2d2334u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2d2338: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d2338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d233c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2340: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d2340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d2344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d2348: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D2348u;
    SET_GPR_U32(ctx, 31, 0x2D2350u);
    ctx->pc = 0x2D234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2348u;
    // 0x2d234c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D2348u, 0x2D2350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2350u;
label_2d2350:
    // 0x2d2350: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D2350u;
    SET_GPR_U32(ctx, 31, 0x2D2358u);
    ctx->pc = 0x2D2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2350u;
    // 0x2d2354: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D2350u, 0x2D2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2358u;
label_2d2358:
    // 0x2d2358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d235c: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D235Cu;
    {
        const bool branch_taken_0x2d235c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d235c) {
            ctx->pc = 0x2D2360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D235Cu;
            // 0x2d2360: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D23C8u;
            goto label_2d23c8;
        }
    }
    ctx->pc = 0x2D2364u;
    // 0x2d2364: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2D2364u;
    SET_GPR_U32(ctx, 31, 0x2D236Cu);
    ctx->pc = 0x2D2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2364u;
    // 0x2d2368: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2D2364u, 0x2D236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D236Cu;
label_2d236c:
    // 0x2d236c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D236Cu;
    {
        const bool branch_taken_0x2d236c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d236c) {
            ctx->pc = 0x2D2370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D236Cu;
            // 0x2d2370: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D23C8u;
            goto label_2d23c8;
        }
    }
    ctx->pc = 0x2D2374u;
    // 0x2d2374: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x2D2374u;
    SET_GPR_U32(ctx, 31, 0x2D237Cu);
    ctx->pc = 0x2D2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2374u;
    // 0x2d2378: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x2D2374u, 0x2D237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D237Cu;
label_2d237c:
    // 0x2d237c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D237Cu;
    {
        const bool branch_taken_0x2d237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d237c) {
            ctx->pc = 0x2D2380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D237Cu;
            // 0x2d2380: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D23C8u;
            goto label_2d23c8;
        }
    }
    ctx->pc = 0x2D2384u;
    // 0x2d2384: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D2384u;
    SET_GPR_U32(ctx, 31, 0x2D238Cu);
    ctx->pc = 0x2D2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2384u;
    // 0x2d2388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D2384u, 0x2D238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D238Cu;
label_2d238c:
    // 0x2d238c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D238Cu;
    SET_GPR_U32(ctx, 31, 0x2D2394u);
    ctx->pc = 0x2D2390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D238Cu;
    // 0x2d2390: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D238Cu, 0x2D2394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2394u;
label_2d2394:
    // 0x2d2394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2398: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2398u;
    {
        const bool branch_taken_0x2d2398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2398u;
        // 0x2d239c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2398) {
            ctx->pc = 0x2D23B8u;
            goto label_2d23b8;
        }
    }
    ctx->pc = 0x2D23A0u;
    // 0x2d23a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d23a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d23a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d23a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2d23a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d23a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23b0: 0xc0b48fa  jal         func_2D23E8
    ctx->pc = 0x2D23B0u;
    SET_GPR_U32(ctx, 31, 0x2D23B8u);
    ctx->pc = 0x2D23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D23B0u;
    // 0x2d23b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D23E8u, 0x2D23B0u, 0x2D23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23B8u;
label_2d23b8:
    // 0x2d23b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d23b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d23bc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D23BCu;
    SET_GPR_U32(ctx, 31, 0x2D23C4u);
    ctx->pc = 0x2D23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D23BCu;
    // 0x2d23c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D23BCu, 0x2D23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23C4u;
label_2d23c4:
    // 0x2d23c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d23c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d23c8:
    // 0x2d23c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d23c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d23cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d23ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d23d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d23d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d23d4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2d23d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d23d8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d23dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D23DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D23DCu;
        // 0x2d23e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D23DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D23E4u;
    // 0x2d23e4: 0x0  nop
    ctx->pc = 0x2d23e4u;
    // NOP
    ctx->pc = 0x2d23e8u;
}
