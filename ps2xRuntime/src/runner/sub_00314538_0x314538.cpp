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

// Function: sub_00314538
// Address: 0x314538 - 0x3147a0
void sub_00314538_0x314538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314538_0x314538");
#endif

    switch (ctx->pc) {
        case 0x314594u: goto label_314594;
        case 0x3145a0u: goto label_3145a0;
        case 0x3145c8u: goto label_3145c8;
        case 0x3145d0u: goto label_3145d0;
        case 0x3145d8u: goto label_3145d8;
        case 0x3145e8u: goto label_3145e8;
        case 0x3145f4u: goto label_3145f4;
        case 0x314610u: goto label_314610;
        case 0x314618u: goto label_314618;
        case 0x314620u: goto label_314620;
        case 0x314630u: goto label_314630;
        case 0x3146c8u: goto label_3146c8;
        case 0x3146d0u: goto label_3146d0;
        case 0x3146dcu: goto label_3146dc;
        default: break;
    }

    ctx->pc = 0x314538u;

    // 0x314538: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x314538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31453c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31453cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x314540: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x314540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x314544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314548: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x314548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x31454c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x31454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x314550: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x314550u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314554: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x314554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x314558: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x314558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x31455c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x31455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x314560: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x314560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x314564: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x314564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x314568: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x314568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x31456c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x314570: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x314570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x314574: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x314578: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x314578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x31457c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x314580: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x314580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x314584: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x314584u;
    {
        const bool branch_taken_0x314584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314584u;
        // 0x314588: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314584) {
            ctx->pc = 0x31471Cu;
            goto label_31471c;
        }
    }
    ctx->pc = 0x31458Cu;
    // 0x31458c: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x31458Cu;
    SET_GPR_U32(ctx, 31, 0x314594u);
    ctx->pc = 0x314590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31458Cu;
    // 0x314590: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x31458Cu, 0x314594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314594u;
label_314594:
    // 0x314594: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x314594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314598: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x314598u;
    SET_GPR_U32(ctx, 31, 0x3145A0u);
    ctx->pc = 0x31459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314598u;
    // 0x31459c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x314598u, 0x3145A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145A0u;
label_3145a0:
    // 0x3145a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3145a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3145a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3145a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3145a8: 0x8fc2b734  lw          $v0, -0x48CC($fp)
    ctx->pc = 0x3145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
    // 0x3145ac: 0x24970048  addiu       $s7, $a0, 0x48
    ctx->pc = 0x3145acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x3145b0: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x3145b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x3145b4: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x3145b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x3145b8: 0x246306d6  addiu       $v1, $v1, 0x6D6
    ctx->pc = 0x3145b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1750));
    // 0x3145bc: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x3145bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x3145c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3145c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3145c4: 0x0  nop
    ctx->pc = 0x3145c4u;
    // NOP
label_3145c8:
    // 0x3145c8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3145C8u;
    SET_GPR_U32(ctx, 31, 0x3145D0u);
    ctx->pc = 0x3145CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145C8u;
    // 0x3145cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3145C8u, 0x3145D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145D0u;
label_3145d0:
    // 0x3145d0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3145D0u;
    SET_GPR_U32(ctx, 31, 0x3145D8u);
    ctx->pc = 0x3145D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145D0u;
    // 0x3145d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3145D0u, 0x3145D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145D8u;
label_3145d8:
    // 0x3145d8: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x3145D8u;
    {
        const bool branch_taken_0x3145d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3145d8) {
            ctx->pc = 0x3145DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3145D8u;
            // 0x3145dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314708u;
            goto label_314708;
        }
    }
    ctx->pc = 0x3145E0u;
    // 0x3145e0: 0xc087502  jal         func_21D408
    ctx->pc = 0x3145E0u;
    SET_GPR_U32(ctx, 31, 0x3145E8u);
    ctx->pc = 0x3145E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145E0u;
    // 0x3145e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3145E0u, 0x3145E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145E8u;
label_3145e8:
    // 0x3145e8: 0x24530164  addiu       $s3, $v0, 0x164
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x3145ec: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x3145ECu;
    SET_GPR_U32(ctx, 31, 0x3145F4u);
    ctx->pc = 0x3145F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145ECu;
    // 0x3145f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x3145ECu, 0x3145F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145F4u;
label_3145f4:
    // 0x3145f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3145f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3145f8: 0x50430043  beql        $v0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x3145F8u;
    {
        const bool branch_taken_0x3145f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3145f8) {
            ctx->pc = 0x3145FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3145F8u;
            // 0x3145fc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314708u;
            goto label_314708;
        }
    }
    ctx->pc = 0x314600u;
    // 0x314600: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x314600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x314604: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x314604u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x314608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31460c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_314610:
    // 0x314610: 0xc137866  jal         func_4DE198
    ctx->pc = 0x314610u;
    SET_GPR_U32(ctx, 31, 0x314618u);
    ctx->pc = 0x314614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314610u;
    // 0x314614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x314610u, 0x314618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314618u;
label_314618:
    // 0x314618: 0xc0e409a  jal         func_390268
    ctx->pc = 0x314618u;
    SET_GPR_U32(ctx, 31, 0x314620u);
    ctx->pc = 0x31461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314618u;
    // 0x31461c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x314618u, 0x314620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314620u;
label_314620:
    // 0x314620: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x314620u;
    {
        const bool branch_taken_0x314620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314620) {
            ctx->pc = 0x314624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314620u;
            // 0x314624: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3146F8u;
            goto label_3146f8;
        }
    }
    ctx->pc = 0x314628u;
    // 0x314628: 0xc087420  jal         func_21D080
    ctx->pc = 0x314628u;
    SET_GPR_U32(ctx, 31, 0x314630u);
    ctx->pc = 0x31462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314628u;
    // 0x31462c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x314628u, 0x314630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314630u;
label_314630:
    // 0x314630: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x314630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314638: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x314638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31463c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x31463cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x314640: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x314640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314644: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x314644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x314648: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x314648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31464c: 0x0  nop
    ctx->pc = 0x31464cu;
    // NOP
    // 0x314650: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
    ctx->pc = 0x314650u;
    {
        const bool branch_taken_0x314650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314650) {
            ctx->pc = 0x314654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314650u;
            // 0x314654: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3146F8u;
            goto label_3146f8;
        }
    }
    ctx->pc = 0x314658u;
    // 0x314658: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x314658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x31465c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31465cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314660: 0x0  nop
    ctx->pc = 0x314660u;
    // NOP
    // 0x314664: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x314664u;
    {
        const bool branch_taken_0x314664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x314664) {
            ctx->pc = 0x314668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314664u;
            // 0x314668: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3146F8u;
            goto label_3146f8;
        }
    }
    ctx->pc = 0x31466Cu;
    // 0x31466c: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x31466cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x314670: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x314670u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x314674: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x314674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x314678: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x314678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x31467c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x31467cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x314680: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x314680u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x314684: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x314684u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x314688: 0x7a230050  lq          $v1, 0x50($s1)
    ctx->pc = 0x314688u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x31468c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x31468cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x314690: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x314690u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x314694: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x314694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x314698: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x314698u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x31469c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x31469cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3146a0: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x3146a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3146a4: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x3146a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
    // 0x3146a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3146a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3146ac: 0x0  nop
    ctx->pc = 0x3146acu;
    // NOP
    // 0x3146b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3146b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3146b4: 0x0  nop
    ctx->pc = 0x3146b4u;
    // NOP
    // 0x3146b8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3146B8u;
    {
        const bool branch_taken_0x3146b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B8u;
        // 0x3146bc: 0x7fa40000  sq          $a0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146b8) {
            ctx->pc = 0x3146F4u;
            goto label_3146f4;
        }
    }
    ctx->pc = 0x3146C0u;
    // 0x3146c0: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x3146C0u;
    SET_GPR_U32(ctx, 31, 0x3146C8u);
    ctx->pc = 0x3146C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146C0u;
    // 0x3146c4: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x3146C0u, 0x3146C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146C8u;
label_3146c8:
    // 0x3146c8: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x3146C8u;
    SET_GPR_U32(ctx, 31, 0x3146D0u);
    ctx->pc = 0x3146CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146C8u;
    // 0x3146cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x3146C8u, 0x3146D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146D0u;
label_3146d0:
    // 0x3146d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3146d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3146d4: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x3146D4u;
    SET_GPR_U32(ctx, 31, 0x3146DCu);
    ctx->pc = 0x3146D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146D4u;
    // 0x3146d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x3146D4u, 0x3146DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146DCu;
label_3146dc:
    // 0x3146dc: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x3146dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3146e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3146e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3146e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3146e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3146e8: 0x0  nop
    ctx->pc = 0x3146e8u;
    // NOP
    // 0x3146ec: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x3146ECu;
    {
        const bool branch_taken_0x3146ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3146F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146ECu;
        // 0x3146f0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146ec) {
            ctx->pc = 0x31476Cu;
            goto label_31476c;
        }
    }
    ctx->pc = 0x3146F4u;
label_3146f4:
    // 0x3146f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3146f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3146f8:
    // 0x3146f8: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x3146f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3146fc: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3146FCu;
    {
        const bool branch_taken_0x3146fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146FCu;
        // 0x314700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146fc) {
            ctx->pc = 0x314610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314610;
        }
    }
    ctx->pc = 0x314704u;
    // 0x314704: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x314704u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_314708:
    // 0x314708: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x314708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31470c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x31470Cu;
    {
        const bool branch_taken_0x31470c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31470Cu;
        // 0x314710: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31470c) {
            ctx->pc = 0x3145C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3145c8;
        }
    }
    ctx->pc = 0x314714u;
    // 0x314714: 0x16c00015  bnez        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x314714u;
    {
        const bool branch_taken_0x314714 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x314718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314714u;
        // 0x314718: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314714) {
            ctx->pc = 0x31476Cu;
            goto label_31476c;
        }
    }
    ctx->pc = 0x31471Cu;
label_31471c:
    // 0x31471c: 0x8fc2b734  lw          $v0, -0x48CC($fp)
    ctx->pc = 0x31471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
    // 0x314720: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x314720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x314724: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x314724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x314728: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x314728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31472c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31472Cu;
    {
        const bool branch_taken_0x31472c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31472c) {
            ctx->pc = 0x314730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31472Cu;
            // 0x314730: 0x92220075  lbu         $v0, 0x75($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314750u;
            goto label_314750;
        }
    }
    ctx->pc = 0x314734u;
    // 0x314734: 0xa2200075  sb          $zero, 0x75($s1)
    ctx->pc = 0x314734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x314738: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x314738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x31473c: 0x8fc3b734  lw          $v1, -0x48CC($fp)
    ctx->pc = 0x31473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948660)));
    // 0x314740: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x314740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x314744: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x314744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x314748: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x314748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x31474c: 0x92220075  lbu         $v0, 0x75($s1)
    ctx->pc = 0x31474cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 117)));
label_314750:
    // 0x314750: 0x92230074  lbu         $v1, 0x74($s1)
    ctx->pc = 0x314750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x314754: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x314754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x314758: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x314758u;
    {
        const bool branch_taken_0x314758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314758) {
            ctx->pc = 0x31475Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314758u;
            // 0x31475c: 0xa2200075  sb          $zero, 0x75($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314768u;
            goto label_314768;
        }
    }
    ctx->pc = 0x314760u;
    // 0x314760: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x314760u;
    {
        const bool branch_taken_0x314760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314760u;
        // 0x314764: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314760) {
            ctx->pc = 0x31476Cu;
            goto label_31476c;
        }
    }
    ctx->pc = 0x314768u;
label_314768:
    // 0x314768: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x314768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_31476c:
    // 0x31476c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x31476cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x314770: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x314770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x314774: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x314774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314778: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x314778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31477c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x31477cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314780: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x314780u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314784: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x314784u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314788: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x314788u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31478c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x31478cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x314790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314794: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x314794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314798: 0x3e00008  jr          $ra
    ctx->pc = 0x314798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314798u;
        // 0x31479c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3147A0u;
}
