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

// Function: sub_004CE7F8
// Address: 0x4ce7f8 - 0x4ce910
void sub_004CE7F8_0x4ce7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE7F8_0x4ce7f8");
#endif

    switch (ctx->pc) {
        case 0x4ce8fcu: goto label_4ce8fc;
        default: break;
    }

    ctx->pc = 0x4ce7f8u;

    // 0x4ce7f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ce7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce7fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ce7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ce800: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x4ce800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce804: 0x0  nop
    ctx->pc = 0x4ce804u;
    // NOP
    // 0x4ce808: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4CE808u;
    {
        const bool branch_taken_0x4ce808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE808u;
        // 0x4ce80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce808) {
            ctx->pc = 0x4CE814u;
            goto label_4ce814;
        }
    }
    ctx->pc = 0x4CE810u;
    // 0x4ce810: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x4ce810u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_4ce814:
    // 0x4ce814: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4ce814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4ce818: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce820: 0x0  nop
    ctx->pc = 0x4ce820u;
    // NOP
    // 0x4ce824: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x4ce824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce828: 0x0  nop
    ctx->pc = 0x4ce828u;
    // NOP
    // 0x4ce82c: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x4CE82Cu;
    {
        const bool branch_taken_0x4ce82c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce82c) {
            ctx->pc = 0x4CE8F4u;
            goto label_4ce8f4;
        }
    }
    ctx->pc = 0x4CE834u;
    // 0x4ce834: 0x3c013e22  lui         $at, 0x3E22
    ctx->pc = 0x4ce834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15906 << 16));
    // 0x4ce838: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x4ce838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x4ce83c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce840: 0x0  nop
    ctx->pc = 0x4ce840u;
    // NOP
    // 0x4ce844: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x4ce844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4ce848: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4ce848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4ce84c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ce84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce850: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x4ce850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x4ce854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ce854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4ce858: 0x2443ff81  addiu       $v1, $v0, -0x7F
    ctx->pc = 0x4ce858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x4ce85c: 0x461000a  bgez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CE85Cu;
    {
        const bool branch_taken_0x4ce85c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4CE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE85Cu;
        // 0x4ce860: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce85c) {
            ctx->pc = 0x4CE888u;
            goto label_4ce888;
        }
    }
    ctx->pc = 0x4CE864u;
    // 0x4ce864: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4ce864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4ce868: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4CE868u;
    {
        const bool branch_taken_0x4ce868 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4CE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE868u;
        // 0x4ce86c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce868) {
            ctx->pc = 0x4CE894u;
            goto label_4ce894;
        }
    }
    ctx->pc = 0x4CE870u;
    // 0x4ce870: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4CE870u;
    {
        const bool branch_taken_0x4ce870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CE874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE870u;
        // 0x4ce874: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce870) {
            ctx->pc = 0x4CE8DCu;
            goto label_4ce8dc;
        }
    }
    ctx->pc = 0x4CE878u;
    // 0x4ce878: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4ce878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x4ce87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce880: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4CE880u;
    {
        const bool branch_taken_0x4ce880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE880u;
        // 0x4ce884: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce880) {
            ctx->pc = 0x4CE8DCu;
            goto label_4ce8dc;
        }
    }
    ctx->pc = 0x4CE888u;
label_4ce888:
    // 0x4ce888: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4ce888u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ce88c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CE88Cu;
    {
        const bool branch_taken_0x4ce88c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4ce88c) {
            ctx->pc = 0x4CE89Cu;
            goto label_4ce89c;
        }
    }
    ctx->pc = 0x4CE894u;
label_4ce894:
    // 0x4ce894: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4CE894u;
    {
        const bool branch_taken_0x4ce894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE894u;
        // 0x4ce898: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce894) {
            ctx->pc = 0x4CE8DCu;
            goto label_4ce8dc;
        }
    }
    ctx->pc = 0x4CE89Cu;
label_4ce89c:
    // 0x4ce89c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ce89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce8a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4ce8a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce8a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce8a8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4ce8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ce8ac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ce8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ce8b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4ce8b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce8b4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x4CE8B4u;
    {
        const bool branch_taken_0x4ce8b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce8b4) {
            ctx->pc = 0x4CE8DCu;
            goto label_4ce8dc;
        }
    }
    ctx->pc = 0x4CE8BCu;
    // 0x4ce8bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4ce8bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce8c0: 0x0  nop
    ctx->pc = 0x4ce8c0u;
    // NOP
    // 0x4ce8c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x4CE8C4u;
    {
        const bool branch_taken_0x4ce8c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce8c4) {
            ctx->pc = 0x4CE8DCu;
            goto label_4ce8dc;
        }
    }
    ctx->pc = 0x4CE8CCu;
    // 0x4ce8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce8d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce8d4: 0x0  nop
    ctx->pc = 0x4ce8d4u;
    // NOP
    // 0x4ce8d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4ce8d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ce8dc:
    // 0x4ce8dc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4ce8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4ce8e0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce8e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce8e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce8e8: 0x0  nop
    ctx->pc = 0x4ce8e8u;
    // NOP
    // 0x4ce8ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ce8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ce8f0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x4ce8f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_4ce8f4:
    // 0x4ce8f4: 0xc133844  jal         func_4CE110
    ctx->pc = 0x4CE8F4u;
    SET_GPR_U32(ctx, 31, 0x4CE8FCu);
    ctx->pc = 0x4CE110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE110u, 0x4CE8F4u, 0x4CE8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE8FCu;
label_4ce8fc:
    // 0x4ce8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ce8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce900: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE900u;
        // 0x4ce904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE908u;
    // 0x4ce908: 0x0  nop
    ctx->pc = 0x4ce908u;
    // NOP
    // 0x4ce90c: 0x0  nop
    ctx->pc = 0x4ce90cu;
    // NOP
    ctx->pc = 0x4ce910u;
}
