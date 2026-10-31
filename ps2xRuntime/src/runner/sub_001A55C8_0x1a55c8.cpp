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

// Function: sub_001A55C8
// Address: 0x1a55c8 - 0x1a5828
void sub_001A55C8_0x1a55c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A55C8_0x1a55c8");
#endif

    switch (ctx->pc) {
        case 0x1a5600u: goto label_1a5600;
        case 0x1a5618u: goto label_1a5618;
        case 0x1a56a8u: goto label_1a56a8;
        case 0x1a56d0u: goto label_1a56d0;
        case 0x1a5748u: goto label_1a5748;
        default: break;
    }

    ctx->pc = 0x1a55c8u;

    // 0x1a55c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a55c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a55cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a55d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a55d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a55d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a55d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a55d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a55d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a55dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a55e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a55e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a55e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a55ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a55f0: 0x8e330060  lw          $s3, 0x60($s1)
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1a55f4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1a55f8: 0xc06953a  jal         func_1A54E8
    ctx->pc = 0x1A55F8u;
    SET_GPR_U32(ctx, 31, 0x1A5600u);
    ctx->pc = 0x1A55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A55F8u;
    // 0x1a55fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E8u, 0x1A55F8u, 0x1A5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5600u;
label_1a5600:
    // 0x1a5600: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a5600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5604: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x1A5604u;
    {
        const bool branch_taken_0x1a5604 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5604u;
        // 0x1a5608: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5604) {
            ctx->pc = 0x1A5708u;
            goto label_1a5708;
        }
    }
    ctx->pc = 0x1A560Cu;
    // 0x1a560c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a560cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5610: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1A5610u;
    SET_GPR_U32(ctx, 31, 0x1A5618u);
    ctx->pc = 0x1A5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5610u;
    // 0x1a5614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1A5610u, 0x1A5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5618u;
label_1a5618:
    // 0x1a5618: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1a5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a561c: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x1a561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1a5620: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1a5620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1a5624: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1a5624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5628: 0x44923800  mtc1        $s2, $f7
    ctx->pc = 0x1a5628u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1a562c: 0x0  nop
    ctx->pc = 0x1a562cu;
    // NOP
    // 0x1a5630: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1a5630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1a5634: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x1a5634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a5638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a563c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a563cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a5640: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1a5640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a5644: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a5644u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x1a5648: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x1a5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a564c: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x1a564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a5650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a5650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5654: 0x0  nop
    ctx->pc = 0x1a5654u;
    // NOP
    // 0x1a5658: 0x0  nop
    ctx->pc = 0x1a5658u;
    // NOP
    // 0x1a565c: 0x46060a03  div.s       $f8, $f1, $f6
    ctx->pc = 0x1a565cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[1], ctx->f[6]); }
    // 0x1a5660: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x1a5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5664: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1a5664u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1a5668: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1a5668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1a566c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a566cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a5670: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a5670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a5674: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1a5674u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1a5678: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1a5678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a567c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a567cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1a5680: 0x0  nop
    ctx->pc = 0x1a5680u;
    // NOP
    // 0x1a5684: 0x0  nop
    ctx->pc = 0x1a5684u;
    // NOP
    // 0x1a5688: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x1a5688u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[7]); }
    // 0x1a568c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x1a568cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1a5690: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a5690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a5694: 0x46004006  mov.s       $f0, $f8
    ctx->pc = 0x1a5694u;
    ctx->f[0] = FPU_MOV_S(ctx->f[8]);
    // 0x1a5698: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a5698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a569c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x1a569cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x1a56a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A56A0u;
    {
        const bool branch_taken_0x1a56a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56A0u;
        // 0x1a56a4: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56a0) {
            ctx->pc = 0x1A56C0u;
            goto label_1a56c0;
        }
    }
    ctx->pc = 0x1A56A8u;
label_1a56a8:
    // 0x1a56a8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1a56a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1a56ac: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a56acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56b0: 0x0  nop
    ctx->pc = 0x1a56b0u;
    // NOP
    // 0x1a56b4: 0x0  nop
    ctx->pc = 0x1a56b4u;
    // NOP
    // 0x1a56b8: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A56B8u;
    {
        const bool branch_taken_0x1a56b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56B8u;
        // 0x1a56bc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56b8) {
            ctx->pc = 0x1A56A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a56a8;
        }
    }
    ctx->pc = 0x1A56C0u;
label_1a56c0:
    // 0x1a56c0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x1a56c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56c4: 0x0  nop
    ctx->pc = 0x1a56c4u;
    // NOP
    // 0x1a56c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A56C8u;
    {
        const bool branch_taken_0x1a56c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56c8) {
            ctx->pc = 0x1A56E8u;
            goto label_1a56e8;
        }
    }
    ctx->pc = 0x1A56D0u;
label_1a56d0:
    // 0x1a56d0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1a56d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1a56d4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1a56d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a56d8: 0x0  nop
    ctx->pc = 0x1a56d8u;
    // NOP
    // 0x1a56dc: 0x0  nop
    ctx->pc = 0x1a56dcu;
    // NOP
    // 0x1a56e0: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A56E0u;
    {
        const bool branch_taken_0x1a56e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E0u;
        // 0x1a56e4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56e0) {
            ctx->pc = 0x1A56D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a56d0;
        }
    }
    ctx->pc = 0x1A56E8u;
label_1a56e8:
    // 0x1a56e8: 0x11200048  beqz        $t1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1A56E8u;
    {
        const bool branch_taken_0x1a56e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56E8u;
        // 0x1a56ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56e8) {
            ctx->pc = 0x1A580Cu;
            goto label_1a580c;
        }
    }
    ctx->pc = 0x1A56F0u;
    // 0x1a56f0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1a56f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1a56f4: 0x8ca2d1d8  lw          $v0, -0x2E28($a1)
    ctx->pc = 0x1a56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50D1D8u));
    // 0x1a56f8: 0x11220044  beq         $t1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A56F8u;
    {
        const bool branch_taken_0x1a56f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A56F8u;
        // 0x1a56fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56f8) {
            ctx->pc = 0x1A580Cu;
            goto label_1a580c;
        }
    }
    ctx->pc = 0x1A5700u;
    // 0x1a5700: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5700u;
    {
        const bool branch_taken_0x1a5700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5700u;
        // 0x1a5704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5700) {
            ctx->pc = 0x1A5710u;
            goto label_1a5710;
        }
    }
    ctx->pc = 0x1A5708u;
label_1a5708:
    // 0x1a5708: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1A5708u;
    {
        const bool branch_taken_0x1a5708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5708u;
        // 0x1a570c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5708) {
            ctx->pc = 0x1A580Cu;
            goto label_1a580c;
        }
    }
    ctx->pc = 0x1A5710u;
label_1a5710:
    // 0x1a5710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5714: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1a5714u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5718: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A5718u;
    {
        const bool branch_taken_0x1a5718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5718u;
        // 0x1a571c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5718) {
            ctx->pc = 0x1A5808u;
            goto label_1a5808;
        }
    }
    ctx->pc = 0x1A5720u;
    // 0x1a5720: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a5720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5724: 0x2412003c  addiu       $s2, $zero, 0x3C
    ctx->pc = 0x1a5724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a5728: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a5728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a572c: 0x2410003e  addiu       $s0, $zero, 0x3E
    ctx->pc = 0x1a572cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1a5730: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1a5730u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5734: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5738: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a573c: 0x240d0043  addiu       $t5, $zero, 0x43
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a5740: 0x240c0052  addiu       $t4, $zero, 0x52
    ctx->pc = 0x1a5740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a5744: 0x240b004d  addiu       $t3, $zero, 0x4D
    ctx->pc = 0x1a5744u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1a5748:
    // 0x1a5748: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1a5748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a574c: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A574Cu;
    {
        const bool branch_taken_0x1a574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a574c) {
            ctx->pc = 0x1A575Cu;
            goto label_1a575c;
        }
    }
    ctx->pc = 0x1A5754u;
    // 0x1a5754: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A5754u;
    {
        const bool branch_taken_0x1a5754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5754u;
        // 0x1a5758: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5754) {
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A575Cu;
    {
        const bool branch_taken_0x1a575c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1a575c) {
            ctx->pc = 0x1A5770u;
            goto label_1a5770;
        }
    }
    ctx->pc = 0x1A5764u;
    // 0x1a5764: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1a5764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1a5768: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A5768u;
    {
        const bool branch_taken_0x1a5768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5768u;
        // 0x1a576c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5768) {
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A5770u;
label_1a5770:
    // 0x1a5770: 0x54cf001a  bnel        $a2, $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A5770u;
    {
        const bool branch_taken_0x1a5770 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 15));
        if (branch_taken_0x1a5770) {
            ctx->pc = 0x1A5774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5770u;
            // 0x1a5774: 0x80a30001  lb          $v1, 0x1($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A57DCu;
            goto label_1a57dc;
        }
    }
    ctx->pc = 0x1A5778u;
    // 0x1a5778: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1a5778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a577c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A577Cu;
    {
        const bool branch_taken_0x1a577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A577Cu;
        // 0x1a5780: 0x1481021  addu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a577c) {
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A5784u;
    // 0x1a5784: 0x150e0013  bne         $t0, $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A5784u;
    {
        const bool branch_taken_0x1a5784 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 14));
        ctx->pc = 0x1A5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5784u;
        // 0x1a5788: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5784) {
            ctx->pc = 0x1A57D4u;
            goto label_1a57d4;
        }
    }
    ctx->pc = 0x1A578Cu;
    // 0x1a578c: 0x83a20010  lb          $v0, 0x10($sp)
    ctx->pc = 0x1a578cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5790: 0x544d0011  bnel        $v0, $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A5790u;
    {
        const bool branch_taken_0x1a5790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x1a5790) {
            ctx->pc = 0x1A5794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5790u;
            // 0x1a5794: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A5798u;
    // 0x1a5798: 0x83a20011  lb          $v0, 0x11($sp)
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x1a579c: 0x544c000e  bnel        $v0, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1A579Cu;
    {
        const bool branch_taken_0x1a579c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x1a579c) {
            ctx->pc = 0x1A57A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A579Cu;
            // 0x1a57a0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A57A4u;
    // 0x1a57a4: 0x83a20012  lb          $v0, 0x12($sp)
    ctx->pc = 0x1a57a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x1a57a8: 0x544b000b  bnel        $v0, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1A57A8u;
    {
        const bool branch_taken_0x1a57a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1a57a8) {
            ctx->pc = 0x1A57ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A57A8u;
            // 0x1a57ac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A57B0u;
    // 0x1a57b0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1a57b4: 0x8ce3d1d8  lw          $v1, -0x2E28($a3)
    ctx->pc = 0x1a57b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955480)));
    // 0x1a57b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a57bc: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1a57c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a57c4: 0x14690004  bne         $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A57C4u;
    {
        const bool branch_taken_0x1a57c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A57C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57C4u;
        // 0x1a57c8: 0xace3d1d8  sw          $v1, -0x2E28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294955480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57c4) {
            ctx->pc = 0x1A57D8u;
            goto label_1a57d8;
        }
    }
    ctx->pc = 0x1A57CCu;
    // 0x1a57cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A57CCu;
    {
        const bool branch_taken_0x1a57cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57CCu;
        // 0x1a57d0: 0xa080fffe  sb          $zero, -0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294967294), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57cc) {
            ctx->pc = 0x1A5808u;
            goto label_1a5808;
        }
    }
    ctx->pc = 0x1A57D4u;
label_1a57d4:
    // 0x1a57d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a57d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1a57d8:
    // 0x1a57d8: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x1a57d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1a57dc:
    // 0x1a57dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A57DCu;
    {
        const bool branch_taken_0x1a57dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57DCu;
        // 0x1a57e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57dc) {
            ctx->pc = 0x1A57FCu;
            goto label_1a57fc;
        }
    }
    ctx->pc = 0x1A57E4u;
    // 0x1a57e4: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1a57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x1a57e8: 0x8ce3d1d8  lw          $v1, -0x2E28($a3)
    ctx->pc = 0x1a57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955480)));
    // 0x1a57ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a57f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1a57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1a57f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a57f8: 0xace3d1d8  sw          $v1, -0x2E28($a3)
    ctx->pc = 0x1a57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955480), GPR_U32(ctx, 3));
label_1a57fc:
    // 0x1a57fc: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1a57fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a5800: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1A5800u;
    {
        const bool branch_taken_0x1a5800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5800u;
        // 0x1a5804: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5800) {
            ctx->pc = 0x1A5748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5748;
        }
    }
    ctx->pc = 0x1A5808u;
label_1a5808:
    // 0x1a5808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a580c:
    // 0x1a580c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a580cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a5810: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a5810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a5814: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a5814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5818: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a5818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a581c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a581cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5820: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5820u;
        // 0x1a5824: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5828u;
}
