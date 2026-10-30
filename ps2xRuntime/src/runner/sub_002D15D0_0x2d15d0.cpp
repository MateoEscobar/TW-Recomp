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

// Function: sub_002D15D0
// Address: 0x2d15d0 - 0x2d18b8
void sub_002D15D0_0x2d15d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D15D0_0x2d15d0");
#endif

    switch (ctx->pc) {
        case 0x2d1630u: goto label_2d1630;
        case 0x2d166cu: goto label_2d166c;
        case 0x2d168cu: goto label_2d168c;
        case 0x2d16b8u: goto label_2d16b8;
        case 0x2d16c8u: goto label_2d16c8;
        case 0x2d16f8u: goto label_2d16f8;
        case 0x2d1704u: goto label_2d1704;
        case 0x2d17e8u: goto label_2d17e8;
        case 0x2d1808u: goto label_2d1808;
        case 0x2d1830u: goto label_2d1830;
        case 0x2d184cu: goto label_2d184c;
        default: break;
    }

    ctx->pc = 0x2d15d0u;

    // 0x2d15d0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2d15d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2d15d4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2d15d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x2d15d8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2d15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x2d15dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d15dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15e0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2d15e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x2d15e4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2d15e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x2d15e8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2d15e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x2d15ec: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2d15ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x2d15f0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2d15f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x2d15f4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2d15f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x2d15f8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2d15f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x2d15fc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d15fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d1600: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2d1600u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2d1604: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x2d1604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2d1608: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2d1608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2d160c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2d160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d1610: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x2d1610u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2d1614: 0x8e05017c  lw          $a1, 0x17C($s0)
    ctx->pc = 0x2d1614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x2d1618: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
    ctx->pc = 0x2D1618u;
    {
        const bool branch_taken_0x2d1618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1618u;
        // 0x2d161c: 0x3c12006f  lui         $s2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1618) {
            ctx->pc = 0x2D1878u;
            goto label_2d1878;
        }
    }
    ctx->pc = 0x2D1620u;
    // 0x2d1620: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x2d1620u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x2d1624: 0x2644b880  addiu       $a0, $s2, -0x4780
    ctx->pc = 0x2d1624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294948992));
    // 0x2d1628: 0xc0cd526  jal         func_335498
    ctx->pc = 0x2D1628u;
    SET_GPR_U32(ctx, 31, 0x2D1630u);
    ctx->pc = 0x2D162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1628u;
    // 0x2d162c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x2D1628u, 0x2D1630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1630u;
label_2d1630:
    // 0x2d1630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d1630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d1634: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d1634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d1638: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d1638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d163c: 0x26254b00  addiu       $a1, $s1, 0x4B00
    ctx->pc = 0x2d163cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x2d1640: 0x8c50015c  lw          $s0, 0x15C($v0)
    ctx->pc = 0x2d1640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2d1644: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2d1644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1648: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x2d1648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2d164c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1650: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2d1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2d1654: 0x86620092  lh          $v0, 0x92($s3)
    ctx->pc = 0x2d1654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2d1658: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d1658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d165c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d1660: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d1660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d1664: 0xc104a44  jal         func_412910
    ctx->pc = 0x2D1664u;
    SET_GPR_U32(ctx, 31, 0x2D166Cu);
    ctx->pc = 0x2D1668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1664u;
    // 0x2d1668: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x2D1664u, 0x2D166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D166Cu;
label_2d166c:
    // 0x2d166c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d166cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d1670: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d1670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d1674: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d1674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d1678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d167c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1680: 0x2484b8a0  addiu       $a0, $a0, -0x4760
    ctx->pc = 0x2d1680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    // 0x2d1684: 0xc0cd508  jal         func_335420
    ctx->pc = 0x2D1684u;
    SET_GPR_U32(ctx, 31, 0x2D168Cu);
    ctx->pc = 0x2D1688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1684u;
    // 0x2d1688: 0xc6140040  lwc1        $f20, 0x40($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x2D1684u, 0x2D168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D168Cu;
label_2d168c:
    // 0x2d168c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2d168cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2d1690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d1690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d1694: 0x0  nop
    ctx->pc = 0x2d1694u;
    // NOP
    // 0x2d1698: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x2d1698u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2d169c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2d169cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d16a0: 0x441ea000  mfc1        $fp, $f20
    ctx->pc = 0x2d16a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x2d16a4: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2d16a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d16a8: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x2d16a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x2d16ac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2d16acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x2d16b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D16B0u;
    {
        const bool branch_taken_0x2d16b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D16B0u;
        // 0x2d16b4: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d16b0) {
            ctx->pc = 0x2D16C0u;
            goto label_2d16c0;
        }
    }
    ctx->pc = 0x2D16B8u;
label_2d16b8:
    // 0x2d16b8: 0x680004e  bltz        $s4, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D16B8u;
    {
        const bool branch_taken_0x2d16b8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2d16b8) {
            ctx->pc = 0x2D17F4u;
            goto label_2d17f4;
        }
    }
    ctx->pc = 0x2D16C0u;
label_2d16c0:
    // 0x2d16c0: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x2D16C0u;
    SET_GPR_U32(ctx, 31, 0x2D16C8u);
    ctx->pc = 0x2D16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16C0u;
    // 0x2d16c4: 0x26e4b880  addiu       $a0, $s7, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x2D16C0u, 0x2D16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16C8u;
label_2d16c8:
    // 0x2d16c8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2d16c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2d16cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d16ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d16d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d16d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d16d4: 0x26c31740  addiu       $v1, $s6, 0x1740
    ctx->pc = 0x2d16d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 5952));
    // 0x2d16d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d16d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d16dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d16dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d16e0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2d16e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d16e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d16e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d16e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d16e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d16ec: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2d16ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2d16f0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x2D16F0u;
    SET_GPR_U32(ctx, 31, 0x2D16F8u);
    ctx->pc = 0x2D16F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16F0u;
    // 0x2d16f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x2D16F0u, 0x2D16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D16F8u;
label_2d16f8:
    // 0x2d16f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2d16f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d16fc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x2D16FCu;
    SET_GPR_U32(ctx, 31, 0x2D1704u);
    ctx->pc = 0x2D1700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D16FCu;
    // 0x2d1700: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x2D16FCu, 0x2D1704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1704u;
label_2d1704:
    // 0x2d1704: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2d1704u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1708: 0x26021730  addiu       $v0, $s0, 0x1730
    ctx->pc = 0x2d1708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5936));
    // 0x2d170c: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x2d170cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d1710: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d1710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d1714: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d1714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d1718: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d171c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2d171cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d1720: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2d1720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d1724: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d1724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2d1728: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d1728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d172c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2d172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1730: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2d1730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1734: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2d1734u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1738: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d1738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d173c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d173cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d1740: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2d1740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d1744: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2d1744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2d1748: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2d1748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d174c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d174cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1750: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d1750u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2d1754: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x2d1754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1758: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2d1758u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d175c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x2d175cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d1760: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2d1760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1764: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x2d1764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d1768: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x2d1768u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d176c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2d176cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1770: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2d1770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d1774: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x2d1774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d1778: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x2d1778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d177c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x2d177cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2d1780: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x2d1780u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d1784: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x2d1784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d1788: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x2d1788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d178c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x2d178cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2d1790: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d1790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2d1794: 0x48be1000  qmtc2.ni    $fp, $vf2
    ctx->pc = 0x2d1794u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 30));
    // 0x2d1798: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d1798u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d179c: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2d179cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d17a0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x2d17a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d17a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d17a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2d17a8: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2d17a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2d17ac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d17acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d17b0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d17b0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2d17b4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d17b4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d17b8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2d17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2d17bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2d17bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2d17c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d17c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17c4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x2d17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x2d17c8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d17c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2d17cc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2d17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2d17d0: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x2d17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x2d17d4: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x2d17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x2d17d8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2d17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2d17dc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2d17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2d17e0: 0xc0941c2  jal         func_250708
    ctx->pc = 0x2D17E0u;
    SET_GPR_U32(ctx, 31, 0x2D17E8u);
    ctx->pc = 0x2D17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17E0u;
    // 0x2d17e4: 0x7fa30030  sq          $v1, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x2D17E0u, 0x2D17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17E8u;
label_2d17e8:
    // 0x2d17e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d17e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17ec: 0x1220ffb2  beqz        $s1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2D17ECu;
    {
        const bool branch_taken_0x2d17ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d17ec) {
            ctx->pc = 0x2D16B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d16b8;
        }
    }
    ctx->pc = 0x2D17F4u;
label_2d17f4:
    // 0x2d17f4: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D17F4u;
    {
        const bool branch_taken_0x2d17f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17F4u;
        // 0x2d17f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17f4) {
            ctx->pc = 0x2D187Cu;
            goto label_2d187c;
        }
    }
    ctx->pc = 0x2D17FCu;
    // 0x2d17fc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d1800: 0xc0a3fce  jal         func_28FF38
    ctx->pc = 0x2D1800u;
    SET_GPR_U32(ctx, 31, 0x2D1808u);
    ctx->pc = 0x2D1804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1800u;
    // 0x2d1804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF38u, 0x2D1800u, 0x2D1808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1808u;
label_2d1808:
    // 0x2d1808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d180c: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D180Cu;
    {
        const bool branch_taken_0x2d180c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D180Cu;
        // 0x2d1810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d180c) {
            ctx->pc = 0x2D187Cu;
            goto label_2d187c;
        }
    }
    ctx->pc = 0x2D1814u;
    // 0x2d1814: 0x86700092  lh          $s0, 0x92($s3)
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2d1818: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2d1818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2d181c: 0x24624b00  addiu       $v0, $v1, 0x4B00
    ctx->pc = 0x2d181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2d1820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1824: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2d1824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2d1828: 0xc091e56  jal         func_247958
    ctx->pc = 0x2D1828u;
    SET_GPR_U32(ctx, 31, 0x2D1830u);
    ctx->pc = 0x2D182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1828u;
    // 0x2d182c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x2D1828u, 0x2D1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1830u;
label_2d1830:
    // 0x2d1830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1838: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d1838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d183c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d183cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d1840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1844: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2D1844u;
    SET_GPR_U32(ctx, 31, 0x2D184Cu);
    ctx->pc = 0x2D1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1844u;
    // 0x2d1848: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D1844u, 0x2D184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D184Cu;
label_2d184c:
    // 0x2d184c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D184Cu;
    {
        const bool branch_taken_0x2d184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D184Cu;
        // 0x2d1850: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d184c) {
            ctx->pc = 0x2D1878u;
            goto label_2d1878;
        }
    }
    ctx->pc = 0x2D1854u;
    // 0x2d1854: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2d1854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2d1858: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x2d1858u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d185c: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2d185cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d1860: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2d1860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2d1864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1868: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2d1868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2d186c: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2d186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
    // 0x2d1870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1870u;
    {
        const bool branch_taken_0x2d1870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1870u;
        // 0x2d1874: 0xaea30020  sw          $v1, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1870) {
            ctx->pc = 0x2D187Cu;
            goto label_2d187c;
        }
    }
    ctx->pc = 0x2D1878u;
label_2d1878:
    // 0x2d1878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d187c:
    // 0x2d187c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2d187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d1880: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2d1880u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d1884: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2d1884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d1888: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2d1888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d188c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2d188cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d1890: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2d1890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d1894: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2d1894u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d1898: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2d1898u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d189c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2d189cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d18a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d18a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d18a4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2d18a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d18a8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2d18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d18ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D18ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18ACu;
        // 0x2d18b0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D18ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D18B4u;
    // 0x2d18b4: 0x0  nop
    ctx->pc = 0x2d18b4u;
    // NOP
    ctx->pc = 0x2d18b8u;
}
