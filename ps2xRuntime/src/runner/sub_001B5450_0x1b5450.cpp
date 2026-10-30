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

// Function: sub_001B5450
// Address: 0x1b5450 - 0x1b54f0
void sub_001B5450_0x1b5450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5450_0x1b5450");
#endif

    switch (ctx->pc) {
        case 0x1b54a0u: goto label_1b54a0;
        case 0x1b54b4u: goto label_1b54b4;
        case 0x1b54c4u: goto label_1b54c4;
        case 0x1b54d8u: goto label_1b54d8;
        default: break;
    }

    ctx->pc = 0x1b5450u;

    // 0x1b5450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5458: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1b5458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b545c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1b545cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b5460: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1b5460u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1b5464: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1b5464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b5468: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1b5468u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1b546c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b546cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5470: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B5470u;
    {
        const bool branch_taken_0x1b5470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5470u;
        // 0x1b5474: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5470) {
            ctx->pc = 0x1B54A8u;
            goto label_1b54a8;
        }
    }
    ctx->pc = 0x1B5478u;
    // 0x1b5478: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5478u;
    {
        const bool branch_taken_0x1b5478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5478u;
        // 0x1b547c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5478) {
            ctx->pc = 0x1B5498u;
            goto label_1b5498;
        }
    }
    ctx->pc = 0x1B5480u;
    // 0x1b5480: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5480u;
    {
        const bool branch_taken_0x1b5480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5480u;
        // 0x1b5484: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5480) {
            ctx->pc = 0x1B54B4u;
            goto label_1b54b4;
        }
    }
    ctx->pc = 0x1B5488u;
    // 0x1b5488: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5488u;
    {
        const bool branch_taken_0x1b5488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5488u;
        // 0x1b548c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5488) {
            ctx->pc = 0x1B54CCu;
            goto label_1b54cc;
        }
    }
    ctx->pc = 0x1B5490u;
    // 0x1b5490: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B5490u;
    {
        const bool branch_taken_0x1b5490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5490u;
        // 0x1b5494: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5490) {
            ctx->pc = 0x1B54E0u;
            goto label_1b54e0;
        }
    }
    ctx->pc = 0x1B5498u;
label_1b5498:
    // 0x1b5498: 0xc06d31e  jal         func_1B4C78
    ctx->pc = 0x1B5498u;
    SET_GPR_U32(ctx, 31, 0x1B54A0u);
    ctx->pc = 0x1B549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5498u;
    // 0x1b549c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C78u, 0x1B5498u, 0x1B54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54A0u;
label_1b54a0:
    // 0x1b54a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B54A0u;
    {
        const bool branch_taken_0x1b54a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54A0u;
        // 0x1b54a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54a0) {
            ctx->pc = 0x1B54DCu;
            goto label_1b54dc;
        }
    }
    ctx->pc = 0x1B54A8u;
label_1b54a8:
    // 0x1b54a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b54a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54ac: 0xc06d3b4  jal         func_1B4ED0
    ctx->pc = 0x1B54ACu;
    SET_GPR_U32(ctx, 31, 0x1B54B4u);
    ctx->pc = 0x1B54B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54ACu;
    // 0x1b54b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4ED0u, 0x1B54ACu, 0x1B54B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54B4u;
label_1b54b4:
    // 0x1b54b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b54b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b54b8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1b54b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1b54bc: 0xc06d3f0  jal         func_1B4FC0
    ctx->pc = 0x1B54BCu;
    SET_GPR_U32(ctx, 31, 0x1B54C4u);
    ctx->pc = 0x1B54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54BCu;
    // 0x1b54c0: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4FC0u, 0x1B54BCu, 0x1B54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54C4u;
label_1b54c4:
    // 0x1b54c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B54C4u;
    {
        const bool branch_taken_0x1b54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54C4u;
        // 0x1b54c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54c4) {
            ctx->pc = 0x1B54DCu;
            goto label_1b54dc;
        }
    }
    ctx->pc = 0x1B54CCu;
label_1b54cc:
    // 0x1b54cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b54ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b54d0: 0xc06d4e0  jal         func_1B5380
    ctx->pc = 0x1B54D0u;
    SET_GPR_U32(ctx, 31, 0x1B54D8u);
    ctx->pc = 0x1B54D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54D0u;
    // 0x1b54d4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5380u, 0x1B54D0u, 0x1B54D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54D8u;
label_1b54d8:
    // 0x1b54d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b54d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b54dc:
    // 0x1b54dc: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x1b54dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b54e0:
    // 0x1b54e0: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1b54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b54e4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1b54e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b54e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B54E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54E8u;
        // 0x1b54ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B54E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B54F0u;
}
