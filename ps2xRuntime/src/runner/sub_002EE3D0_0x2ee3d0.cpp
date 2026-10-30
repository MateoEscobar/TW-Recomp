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

// Function: sub_002EE3D0
// Address: 0x2ee3d0 - 0x2ee4f0
void sub_002EE3D0_0x2ee3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE3D0_0x2ee3d0");
#endif

    switch (ctx->pc) {
        case 0x2ee474u: goto label_2ee474;
        case 0x2ee4a4u: goto label_2ee4a4;
        case 0x2ee4d0u: goto label_2ee4d0;
        default: break;
    }

    ctx->pc = 0x2ee3d0u;

    // 0x2ee3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ee3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ee3d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ee3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ee3d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2ee3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2ee3dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ee3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee3e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ee3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ee3e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee3e8: 0x24040087  addiu       $a0, $zero, 0x87
    ctx->pc = 0x2ee3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x2ee3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ee3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee3f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ee3f4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ee3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ee3f8: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x2ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2ee3fc: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE3FCu;
    {
        const bool branch_taken_0x2ee3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3FCu;
        // 0x2ee400: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3fc) {
            ctx->pc = 0x2EE410u;
            goto label_2ee410;
        }
    }
    ctx->pc = 0x2EE404u;
    // 0x2ee404: 0x8e0203e8  lw          $v0, 0x3E8($s0)
    ctx->pc = 0x2ee404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x2ee408: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2EE408u;
    {
        const bool branch_taken_0x2ee408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee408) {
            ctx->pc = 0x2EE40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE408u;
            // 0x2ee40c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4D4u;
            goto label_2ee4d4;
        }
    }
    ctx->pc = 0x2EE410u;
label_2ee410:
    // 0x2ee410: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE410u;
    {
        const bool branch_taken_0x2ee410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE410u;
        // 0x2ee414: 0x24120256  addiu       $s2, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee410) {
            ctx->pc = 0x2EE424u;
            goto label_2ee424;
        }
    }
    ctx->pc = 0x2EE418u;
    // 0x2ee418: 0x240200b2  addiu       $v0, $zero, 0xB2
    ctx->pc = 0x2ee418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x2ee41c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE41Cu;
    {
        const bool branch_taken_0x2ee41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee41c) {
            ctx->pc = 0x2EE46Cu;
            goto label_2ee46c;
        }
    }
    ctx->pc = 0x2EE424u;
label_2ee424:
    // 0x2ee424: 0x820203c8  lb          $v0, 0x3C8($s0)
    ctx->pc = 0x2ee424u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x2ee428: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE428u;
    {
        const bool branch_taken_0x2ee428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee428) {
            ctx->pc = 0x2EE46Cu;
            goto label_2ee46c;
        }
    }
    ctx->pc = 0x2EE430u;
    // 0x2ee430: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2EE430u;
    {
        const bool branch_taken_0x2ee430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE430u;
        // 0x2ee434: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee430) {
            ctx->pc = 0x2EE46Cu;
            goto label_2ee46c;
        }
    }
    ctx->pc = 0x2EE438u;
    // 0x2ee438: 0x84c40092  lh          $a0, 0x92($a2)
    ctx->pc = 0x2ee438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x2ee43c: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2ee43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2ee440: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2ee440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2ee444: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ee444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ee448: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ee448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ee44c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ee44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ee450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee454: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2ee454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee458: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ee458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee45c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ee45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee460: 0x0  nop
    ctx->pc = 0x2ee460u;
    // NOP
    // 0x2ee464: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE464u;
    {
        const bool branch_taken_0x2ee464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee464) {
            ctx->pc = 0x2EE468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE464u;
            // 0x2ee468: 0x24120257  addiu       $s2, $zero, 0x257 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE46Cu;
            goto label_2ee46c;
        }
    }
    ctx->pc = 0x2EE46Cu;
label_2ee46c:
    // 0x2ee46c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2EE46Cu;
    SET_GPR_U32(ctx, 31, 0x2EE474u);
    ctx->pc = 0x2EE470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE46Cu;
    // 0x2ee470: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2EE46Cu, 0x2EE474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE474u;
label_2ee474:
    // 0x2ee474: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE474u;
    {
        const bool branch_taken_0x2ee474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE474u;
        // 0x2ee478: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee474) {
            ctx->pc = 0x2EE4A4u;
            goto label_2ee4a4;
        }
    }
    ctx->pc = 0x2EE47Cu;
    // 0x2ee47c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ee47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2ee480: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ee480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ee484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ee484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ee488: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ee488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ee48c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ee48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee494: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ee494u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ee498: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ee498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee49c: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2EE49Cu;
    SET_GPR_U32(ctx, 31, 0x2EE4A4u);
    ctx->pc = 0x2EE4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE49Cu;
    // 0x2ee4a0: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2EE49Cu, 0x2EE4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4A4u;
label_2ee4a4:
    // 0x2ee4a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2ee4a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee4ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ee4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ee4b0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2ee4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2ee4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ee4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ee4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ee4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ee4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee4c8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2EE4C8u;
    SET_GPR_U32(ctx, 31, 0x2EE4D0u);
    ctx->pc = 0x2EE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4C8u;
    // 0x2ee4cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2EE4C8u, 0x2EE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4D0u;
label_2ee4d0:
    // 0x2ee4d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2ee4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee4d4:
    // 0x2ee4d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ee4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee4d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ee4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee4dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2ee4dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ee4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4E4u;
        // 0x2ee4e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE4ECu;
    // 0x2ee4ec: 0x0  nop
    ctx->pc = 0x2ee4ecu;
    // NOP
    ctx->pc = 0x2ee4f0u;
}
