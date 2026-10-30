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

// Function: sub_0034B600
// Address: 0x34b600 - 0x34b7b0
void sub_0034B600_0x34b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B600_0x34b600");
#endif

    switch (ctx->pc) {
        case 0x34b71cu: goto label_34b71c;
        case 0x34b77cu: goto label_34b77c;
        case 0x34b7a4u: goto label_34b7a4;
        default: break;
    }

    ctx->pc = 0x34b600u;

    // 0x34b600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b604: 0x46007186  mov.s       $f6, $f14
    ctx->pc = 0x34b604u;
    ctx->f[6] = FPU_MOV_S(ctx->f[14]);
    // 0x34b608: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x34b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x34b60c: 0x460061c6  mov.s       $f7, $f12
    ctx->pc = 0x34b60cu;
    ctx->f[7] = FPU_MOV_S(ctx->f[12]);
    // 0x34b610: 0x46007a46  mov.s       $f9, $f15
    ctx->pc = 0x34b610u;
    ctx->f[9] = FPU_MOV_S(ctx->f[15]);
    // 0x34b614: 0x46008a06  mov.s       $f8, $f17
    ctx->pc = 0x34b614u;
    ctx->f[8] = FPU_MOV_S(ctx->f[17]);
    // 0x34b618: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b61c: 0x46052a82  mul.s       $f10, $f5, $f5
    ctx->pc = 0x34b61cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x34b620: 0x46074901  sub.s       $f4, $f9, $f7
    ctx->pc = 0x34b620u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[7]);
    // 0x34b624: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x34b624u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x34b628: 0x46064441  sub.s       $f17, $f8, $f6
    ctx->pc = 0x34b628u;
    ctx->f[17] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
    // 0x34b62c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34b62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b630: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x34B630u;
    {
        const bool branch_taken_0x34b630 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B630u;
        // 0x34b634: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b630) {
            ctx->pc = 0x34B668u;
            goto label_34b668;
        }
    }
    ctx->pc = 0x34B638u;
    // 0x34b638: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x34b638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x34b63c: 0x46118842  mul.s       $f1, $f17, $f17
    ctx->pc = 0x34b63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[17], ctx->f[17]);
    // 0x34b640: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34b640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b644: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b648: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x34b648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x34b64c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x34b64cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b650: 0x0  nop
    ctx->pc = 0x34b650u;
    // NOP
    // 0x34b654: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x34B654u;
    {
        const bool branch_taken_0x34b654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b654) {
            ctx->pc = 0x34B658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B654u;
            // 0x34b658: 0x46049002  mul.s       $f0, $f18, $f4 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B66Cu;
            goto label_34b66c;
        }
    }
    ctx->pc = 0x34B65Cu;
    // 0x34b65c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x34b65cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34b660: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x34B660u;
    {
        const bool branch_taken_0x34b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B660u;
        // 0x34b664: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b660) {
            ctx->pc = 0x34B7A4u;
            goto label_34b7a4;
        }
    }
    ctx->pc = 0x34B668u;
label_34b668:
    // 0x34b668: 0x46049002  mul.s       $f0, $f18, $f4
    ctx->pc = 0x34b668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[4]);
label_34b66c:
    // 0x34b66c: 0x46111842  mul.s       $f1, $f3, $f17
    ctx->pc = 0x34b66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[17]);
    // 0x34b670: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34b670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34b674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b678: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34b678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b67c: 0x0  nop
    ctx->pc = 0x34b67cu;
    // NOP
    // 0x34b680: 0x45030048  bc1tl       . + 4 + (0x48 << 2)
    ctx->pc = 0x34B680u;
    {
        const bool branch_taken_0x34b680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b680) {
            ctx->pc = 0x34B684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B680u;
            // 0x34b684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B7A4u;
            goto label_34b7a4;
        }
    }
    ctx->pc = 0x34B688u;
    // 0x34b688: 0x46041842  mul.s       $f1, $f3, $f4
    ctx->pc = 0x34b688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x34b68c: 0x46119002  mul.s       $f0, $f18, $f17
    ctx->pc = 0x34b68cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[17]);
    // 0x34b690: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34b690u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b694: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x34b694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b698: 0x0  nop
    ctx->pc = 0x34b698u;
    // NOP
    // 0x34b69c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x34B69Cu;
    {
        const bool branch_taken_0x34b69c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b69c) {
            ctx->pc = 0x34B724u;
            goto label_34b724;
        }
    }
    ctx->pc = 0x34B6A4u;
    // 0x34b6a4: 0x46121036  c.le.s      $f2, $f18
    ctx->pc = 0x34b6a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[18])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b6a8: 0x0  nop
    ctx->pc = 0x34b6a8u;
    // NOP
    // 0x34b6ac: 0x4503003d  bc1tl       . + 4 + (0x3D << 2)
    ctx->pc = 0x34B6ACu;
    {
        const bool branch_taken_0x34b6ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b6ac) {
            ctx->pc = 0x34B6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B6ACu;
            // 0x34b6b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B7A4u;
            goto label_34b7a4;
        }
    }
    ctx->pc = 0x34B6B4u;
    // 0x34b6b4: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x34b6b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x34b6b8: 0x46120002  mul.s       $f0, $f0, $f18
    ctx->pc = 0x34b6b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
    // 0x34b6bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34b6bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b6c0: 0x0  nop
    ctx->pc = 0x34b6c0u;
    // NOP
    // 0x34b6c4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x34B6C4u;
    {
        const bool branch_taken_0x34b6c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6C4u;
        // 0x34b6c8: 0x46008306  mov.s       $f12, $f16 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b6c4) {
            ctx->pc = 0x34B6F4u;
            goto label_34b6f4;
        }
    }
    ctx->pc = 0x34B6CCu;
    // 0x34b6cc: 0xe7b20000  swc1        $f18, 0x0($sp)
    ctx->pc = 0x34b6ccu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b6d0: 0x46008c06  mov.s       $f16, $f17
    ctx->pc = 0x34b6d0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[17]);
    // 0x34b6d4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x34b6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b6d8: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x34b6d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b6dc: 0x46003346  mov.s       $f13, $f6
    ctx->pc = 0x34b6dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[6]);
    // 0x34b6e0: 0x46003bc6  mov.s       $f15, $f7
    ctx->pc = 0x34b6e0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[7]);
    // 0x34b6e4: 0x46002446  mov.s       $f17, $f4
    ctx->pc = 0x34b6e4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[4]);
    // 0x34b6e8: 0x46001c86  mov.s       $f18, $f3
    ctx->pc = 0x34b6e8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[3]);
    // 0x34b6ec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x34B6ECu;
    {
        const bool branch_taken_0x34b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6ECu;
        // 0x34b6f0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b6ec) {
            ctx->pc = 0x34B79Cu;
            goto label_34b79c;
        }
    }
    ctx->pc = 0x34B6F4u;
label_34b6f4:
    // 0x34b6f4: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x34b6f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x34b6f8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x34b6f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b6fc: 0x46003b06  mov.s       $f12, $f7
    ctx->pc = 0x34b6fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[7]);
    // 0x34b700: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x34b700u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b704: 0x46003386  mov.s       $f14, $f6
    ctx->pc = 0x34b704u;
    ctx->f[14] = FPU_MOV_S(ctx->f[6]);
    // 0x34b708: 0x46004bc6  mov.s       $f15, $f9
    ctx->pc = 0x34b708u;
    ctx->f[15] = FPU_MOV_S(ctx->f[9]);
    // 0x34b70c: 0x46004446  mov.s       $f17, $f8
    ctx->pc = 0x34b70cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[8]);
    // 0x34b710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34b710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b714: 0xc0d2c10  jal         func_34B040
    ctx->pc = 0x34B714u;
    SET_GPR_U32(ctx, 31, 0x34B71Cu);
    ctx->pc = 0x34B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B714u;
    // 0x34b718: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B040u, 0x34B714u, 0x34B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B71Cu;
label_34b71c:
    // 0x34b71c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34B71Cu;
    {
        const bool branch_taken_0x34b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B71Cu;
        // 0x34b720: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b71c) {
            ctx->pc = 0x34B7A8u;
            goto label_34b7a8;
        }
    }
    ctx->pc = 0x34B724u;
label_34b724:
    // 0x34b724: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x34b724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b728: 0x0  nop
    ctx->pc = 0x34b728u;
    // NOP
    // 0x34b72c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x34B72Cu;
    {
        const bool branch_taken_0x34b72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b72c) {
            ctx->pc = 0x34B730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B72Cu;
            // 0x34b730: 0x46032802  mul.s       $f0, $f5, $f3 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B73Cu;
            goto label_34b73c;
        }
    }
    ctx->pc = 0x34B734u;
    // 0x34b734: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34B734u;
    {
        const bool branch_taken_0x34b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B734u;
        // 0x34b738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b734) {
            ctx->pc = 0x34B7A4u;
            goto label_34b7a4;
        }
    }
    ctx->pc = 0x34B73Cu;
label_34b73c:
    // 0x34b73c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34b73cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b740: 0x0  nop
    ctx->pc = 0x34b740u;
    // NOP
    // 0x34b744: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x34B744u;
    {
        const bool branch_taken_0x34b744 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B744u;
        // 0x34b748: 0x46008306  mov.s       $f12, $f16 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b744) {
            ctx->pc = 0x34B784u;
            goto label_34b784;
        }
    }
    ctx->pc = 0x34B74Cu;
    // 0x34b74c: 0xe7b20000  swc1        $f18, 0x0($sp)
    ctx->pc = 0x34b74cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b750: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x34b750u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x34b754: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x34b754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b758: 0x46003306  mov.s       $f12, $f6
    ctx->pc = 0x34b758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[6]);
    // 0x34b75c: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x34b75cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b760: 0x46003b86  mov.s       $f14, $f7
    ctx->pc = 0x34b760u;
    ctx->f[14] = FPU_MOV_S(ctx->f[7]);
    // 0x34b764: 0x460043c6  mov.s       $f15, $f8
    ctx->pc = 0x34b764u;
    ctx->f[15] = FPU_MOV_S(ctx->f[8]);
    // 0x34b768: 0x46004c46  mov.s       $f17, $f9
    ctx->pc = 0x34b768u;
    ctx->f[17] = FPU_MOV_S(ctx->f[9]);
    // 0x34b76c: 0x46001c86  mov.s       $f18, $f3
    ctx->pc = 0x34b76cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[3]);
    // 0x34b770: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34b770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b774: 0xc0d2c10  jal         func_34B040
    ctx->pc = 0x34B774u;
    SET_GPR_U32(ctx, 31, 0x34B77Cu);
    ctx->pc = 0x34B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B774u;
    // 0x34b778: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B040u, 0x34B774u, 0x34B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B77Cu;
label_34b77c:
    // 0x34b77c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34B77Cu;
    {
        const bool branch_taken_0x34b77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B77Cu;
        // 0x34b780: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b77c) {
            ctx->pc = 0x34B7A8u;
            goto label_34b7a8;
        }
    }
    ctx->pc = 0x34B784u;
label_34b784:
    // 0x34b784: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x34b784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34b788: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x34b788u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34b78c: 0x46003b46  mov.s       $f13, $f7
    ctx->pc = 0x34b78cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[7]);
    // 0x34b790: 0x460033c6  mov.s       $f15, $f6
    ctx->pc = 0x34b790u;
    ctx->f[15] = FPU_MOV_S(ctx->f[6]);
    // 0x34b794: 0x46002406  mov.s       $f16, $f4
    ctx->pc = 0x34b794u;
    ctx->f[16] = FPU_MOV_S(ctx->f[4]);
    // 0x34b798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34b798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b79c:
    // 0x34b79c: 0xc0d2cee  jal         func_34B3B8
    ctx->pc = 0x34B79Cu;
    SET_GPR_U32(ctx, 31, 0x34B7A4u);
    ctx->pc = 0x34B3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B3B8u, 0x34B79Cu, 0x34B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7A4u;
label_34b7a4:
    // 0x34b7a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b7a8:
    // 0x34b7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x34B7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7A8u;
        // 0x34b7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B7B0u;
}
