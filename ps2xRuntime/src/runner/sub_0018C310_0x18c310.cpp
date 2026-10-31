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

// Function: sub_0018C310
// Address: 0x18c310 - 0x18c408
void sub_0018C310_0x18c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C310_0x18c310");
#endif

    switch (ctx->pc) {
        case 0x18c310u: goto label_18c310;
        case 0x18c314u: goto label_18c314;
        case 0x18c318u: goto label_18c318;
        case 0x18c31cu: goto label_18c31c;
        case 0x18c320u: goto label_18c320;
        case 0x18c324u: goto label_18c324;
        case 0x18c328u: goto label_18c328;
        case 0x18c32cu: goto label_18c32c;
        case 0x18c330u: goto label_18c330;
        case 0x18c334u: goto label_18c334;
        case 0x18c338u: goto label_18c338;
        case 0x18c33cu: goto label_18c33c;
        case 0x18c340u: goto label_18c340;
        case 0x18c344u: goto label_18c344;
        case 0x18c348u: goto label_18c348;
        case 0x18c34cu: goto label_18c34c;
        case 0x18c350u: goto label_18c350;
        case 0x18c354u: goto label_18c354;
        case 0x18c358u: goto label_18c358;
        case 0x18c35cu: goto label_18c35c;
        case 0x18c360u: goto label_18c360;
        case 0x18c364u: goto label_18c364;
        case 0x18c368u: goto label_18c368;
        case 0x18c36cu: goto label_18c36c;
        case 0x18c370u: goto label_18c370;
        case 0x18c374u: goto label_18c374;
        case 0x18c378u: goto label_18c378;
        case 0x18c37cu: goto label_18c37c;
        case 0x18c380u: goto label_18c380;
        case 0x18c384u: goto label_18c384;
        case 0x18c388u: goto label_18c388;
        case 0x18c38cu: goto label_18c38c;
        case 0x18c390u: goto label_18c390;
        case 0x18c394u: goto label_18c394;
        case 0x18c398u: goto label_18c398;
        case 0x18c39cu: goto label_18c39c;
        case 0x18c3a0u: goto label_18c3a0;
        case 0x18c3a4u: goto label_18c3a4;
        case 0x18c3a8u: goto label_18c3a8;
        case 0x18c3acu: goto label_18c3ac;
        case 0x18c3b0u: goto label_18c3b0;
        case 0x18c3b4u: goto label_18c3b4;
        case 0x18c3b8u: goto label_18c3b8;
        case 0x18c3bcu: goto label_18c3bc;
        case 0x18c3c0u: goto label_18c3c0;
        case 0x18c3c4u: goto label_18c3c4;
        case 0x18c3c8u: goto label_18c3c8;
        case 0x18c3ccu: goto label_18c3cc;
        case 0x18c3d0u: goto label_18c3d0;
        case 0x18c3d4u: goto label_18c3d4;
        case 0x18c3d8u: goto label_18c3d8;
        case 0x18c3dcu: goto label_18c3dc;
        case 0x18c3e0u: goto label_18c3e0;
        case 0x18c3e4u: goto label_18c3e4;
        case 0x18c3e8u: goto label_18c3e8;
        case 0x18c3ecu: goto label_18c3ec;
        case 0x18c3f0u: goto label_18c3f0;
        case 0x18c3f4u: goto label_18c3f4;
        case 0x18c3f8u: goto label_18c3f8;
        case 0x18c3fcu: goto label_18c3fc;
        case 0x18c400u: goto label_18c400;
        case 0x18c404u: goto label_18c404;
        default: break;
    }

    ctx->pc = 0x18c310u;

label_18c310:
    // 0x18c310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18c314:
    // 0x18c314: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18c318:
    // 0x18c318: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18c318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_18c31c:
    // 0x18c31c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_18c320:
    // 0x18c320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c324:
    // 0x18c324: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x18c324u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_18c328:
    // 0x18c328: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18c328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18c32c:
    // 0x18c32c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x18c32cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_18c330:
    // 0x18c330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18c334:
    // 0x18c334: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18c334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_18c338:
    // 0x18c338: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18c338u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18c33c:
    // 0x18c33c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18c33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18c340:
    // 0x18c340: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x18c340u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_18c344:
    // 0x18c344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18c344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18c348:
    // 0x18c348: 0xc10c1fa  jal         func_4307E8
label_18c34c:
    if (ctx->pc == 0x18C34Cu) {
        ctx->pc = 0x18C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C348u;
        // 0x18c34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C350u;
        goto label_18c350;
    }
    ctx->pc = 0x18C348u;
    SET_GPR_U32(ctx, 31, 0x18C350u);
    ctx->pc = 0x18C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C348u;
    // 0x18c34c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x18C348u, 0x18C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C350u;
label_18c350:
    // 0x18c350: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x18c350u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_18c354:
    // 0x18c354: 0x8e26cdb4  lw          $a2, -0x324C($s1)
    ctx->pc = 0x18c354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_18c358:
    // 0x18c358: 0x96050212  lhu         $a1, 0x212($s0)
    ctx->pc = 0x18c358u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18c35c:
    // 0x18c35c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x18c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_18c360:
    // 0x18c360: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x18c360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_18c364:
    // 0x18c364: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x18c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_18c368:
    // 0x18c368: 0x40f809  jalr        $v0
label_18c36c:
    if (ctx->pc == 0x18C36Cu) {
        ctx->pc = 0x18C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C368u;
        // 0x18c36c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C370u;
        goto label_18c370;
    }
    ctx->pc = 0x18C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C370u);
        ctx->pc = 0x18C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C368u;
        // 0x18c36c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C368u, 0x18C370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C370u;
label_18c370:
    // 0x18c370: 0x8e27cdb4  lw          $a3, -0x324C($s1)
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_18c374:
    // 0x18c374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18c374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c378:
    // 0x18c378: 0x96050212  lhu         $a1, 0x212($s0)
    ctx->pc = 0x18c378u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
label_18c37c:
    // 0x18c37c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18c37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18c380:
    // 0x18c380: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x18c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_18c384:
    // 0x18c384: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x18c384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_18c388:
    // 0x18c388: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x18c388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_18c38c:
    // 0x18c38c: 0x60f809  jalr        $v1
label_18c390:
    if (ctx->pc == 0x18C390u) {
        ctx->pc = 0x18C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C38Cu;
        // 0x18c390: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C394u;
        goto label_18c394;
    }
    ctx->pc = 0x18C38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18C394u);
        ctx->pc = 0x18C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C38Cu;
        // 0x18c390: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C38Cu, 0x18C394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C394u;
label_18c394:
    // 0x18c394: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x18c394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_18c398:
    // 0x18c398: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x18c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18c39c:
    // 0x18c39c: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x18c39cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_18c3a0:
    // 0x18c3a0: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x18c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_18c3a4:
    // 0x18c3a4: 0x40f809  jalr        $v0
label_18c3a8:
    if (ctx->pc == 0x18C3A8u) {
        ctx->pc = 0x18C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3A4u;
        // 0x18c3a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3ACu;
        goto label_18c3ac;
    }
    ctx->pc = 0x18C3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C3ACu);
        ctx->pc = 0x18C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3A4u;
        // 0x18c3a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C3A4u, 0x18C3ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C3ACu;
label_18c3ac:
    // 0x18c3ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18c3b0:
    if (ctx->pc == 0x18C3B0u) {
        ctx->pc = 0x18C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3ACu;
        // 0x18c3b0: 0x8e29cdb4  lw          $t1, -0x324C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3B4u;
        goto label_18c3b4;
    }
    ctx->pc = 0x18C3ACu;
    {
        const bool branch_taken_0x18c3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3ACu;
        // 0x18c3b0: 0x8e29cdb4  lw          $t1, -0x324C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c3ac) {
            ctx->pc = 0x18C3E0u;
            goto label_18c3e0;
        }
    }
    ctx->pc = 0x18C3B4u;
label_18c3b4:
    // 0x18c3b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18c3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18c3b8:
    // 0x18c3b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18c3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18c3bc:
    // 0x18c3bc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x18c3bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18c3c0:
    // 0x18c3c0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x18c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_18c3c4:
    // 0x18c3c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18c3c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_18c3c8:
    // 0x18c3c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x18c3c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_18c3cc:
    // 0x18c3cc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18c3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18c3d0:
    // 0x18c3d0: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x18c3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_18c3d4:
    // 0x18c3d4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x18c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_18c3d8:
    // 0x18c3d8: 0x40f809  jalr        $v0
label_18c3dc:
    if (ctx->pc == 0x18C3DCu) {
        ctx->pc = 0x18C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3D8u;
        // 0x18c3dc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C3E0u;
        goto label_18c3e0;
    }
    ctx->pc = 0x18C3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C3E0u);
        ctx->pc = 0x18C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3D8u;
        // 0x18c3dc: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C3D8u, 0x18C3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C3E0u;
label_18c3e0:
    // 0x18c3e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18c3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18c3e4:
    // 0x18c3e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18c3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18c3e8:
    // 0x18c3e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18c3e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18c3ec:
    // 0x18c3ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18c3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18c3f0:
    // 0x18c3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18c3f4:
    // 0x18c3f4: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x18c3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18c3f8:
    // 0x18c3f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x18c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c3fc:
    // 0x18c3fc: 0x3e00008  jr          $ra
label_18c400:
    if (ctx->pc == 0x18C400u) {
        ctx->pc = 0x18C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3FCu;
        // 0x18c400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C404u;
        goto label_18c404;
    }
    ctx->pc = 0x18C3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C3FCu;
        // 0x18c400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C404u;
label_18c404:
    // 0x18c404: 0x0  nop
    ctx->pc = 0x18c404u;
    // NOP
    ctx->pc = 0x18c408u;
}
