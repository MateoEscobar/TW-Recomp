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

// Function: sub_004CE508
// Address: 0x4ce508 - 0x4ce670
void sub_004CE508_0x4ce508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE508_0x4ce508");
#endif

    switch (ctx->pc) {
        case 0x4ce654u: goto label_4ce654;
        default: break;
    }

    ctx->pc = 0x4ce508u;

    // 0x4ce508: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4ce508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4ce50c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce50cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ce514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ce518: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x4ce518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce51c: 0x0  nop
    ctx->pc = 0x4ce51cu;
    // NOP
    // 0x4ce520: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x4CE520u;
    {
        const bool branch_taken_0x4ce520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE520u;
        // 0x4ce524: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce520) {
            ctx->pc = 0x4CE548u;
            goto label_4ce548;
        }
    }
    ctx->pc = 0x4CE528u;
    // 0x4ce528: 0x3c01c0c9  lui         $at, 0xC0C9
    ctx->pc = 0x4ce528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49353 << 16));
    // 0x4ce52c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce534: 0x0  nop
    ctx->pc = 0x4ce534u;
    // NOP
    // 0x4ce538: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x4ce538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce53c: 0x0  nop
    ctx->pc = 0x4ce53cu;
    // NOP
    // 0x4ce540: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x4CE540u;
    {
        const bool branch_taken_0x4ce540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce540) {
            ctx->pc = 0x4CE608u;
            goto label_4ce608;
        }
    }
    ctx->pc = 0x4CE548u;
label_4ce548:
    // 0x4ce548: 0x3c013e22  lui         $at, 0x3E22
    ctx->pc = 0x4ce548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15906 << 16));
    // 0x4ce54c: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x4ce54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x4ce550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce554: 0x0  nop
    ctx->pc = 0x4ce554u;
    // NOP
    // 0x4ce558: 0x46006082  mul.s       $f2, $f12, $f0
    ctx->pc = 0x4ce558u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x4ce55c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4ce55cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4ce560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ce560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce564: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x4ce564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x4ce568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ce568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4ce56c: 0x2443ff81  addiu       $v1, $v0, -0x7F
    ctx->pc = 0x4ce56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x4ce570: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4CE570u;
    {
        const bool branch_taken_0x4ce570 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4CE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE570u;
        // 0x4ce574: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce570) {
            ctx->pc = 0x4CE5A0u;
            goto label_4ce5a0;
        }
    }
    ctx->pc = 0x4CE578u;
    // 0x4ce578: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4ce578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4ce57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ce57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce580: 0x481001b  bgez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4CE580u;
    {
        const bool branch_taken_0x4ce580 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4CE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE580u;
        // 0x4ce584: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce580) {
            ctx->pc = 0x4CE5F0u;
            goto label_4ce5f0;
        }
    }
    ctx->pc = 0x4CE588u;
    // 0x4ce588: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4CE588u;
    {
        const bool branch_taken_0x4ce588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ce588) {
            ctx->pc = 0x4CE5F0u;
            goto label_4ce5f0;
        }
    }
    ctx->pc = 0x4CE590u;
    // 0x4ce590: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x4ce590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x4ce594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce598: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4CE598u;
    {
        const bool branch_taken_0x4ce598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE598u;
        // 0x4ce59c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce598) {
            ctx->pc = 0x4CE5F0u;
            goto label_4ce5f0;
        }
    }
    ctx->pc = 0x4CE5A0u;
label_4ce5a0:
    // 0x4ce5a0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x4ce5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ce5a4: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CE5A4u;
    {
        const bool branch_taken_0x4ce5a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4CE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE5A4u;
        // 0x4ce5a8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce5a4) {
            ctx->pc = 0x4CE5F0u;
            goto label_4ce5f0;
        }
    }
    ctx->pc = 0x4CE5ACu;
    // 0x4ce5ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ce5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce5b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ce5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce5b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce5b8: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x4ce5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4ce5bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4ce5bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce5c0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ce5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ce5c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4ce5c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce5c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x4CE5C8u;
    {
        const bool branch_taken_0x4ce5c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce5c8) {
            ctx->pc = 0x4CE5F0u;
            goto label_4ce5f0;
        }
    }
    ctx->pc = 0x4CE5D0u;
    // 0x4ce5d0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x4ce5d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce5d4: 0x0  nop
    ctx->pc = 0x4ce5d4u;
    // NOP
    // 0x4ce5d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x4CE5D8u;
    {
        const bool branch_taken_0x4ce5d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce5d8) {
            ctx->pc = 0x4CE5F0u;
            goto label_4ce5f0;
        }
    }
    ctx->pc = 0x4CE5E0u;
    // 0x4ce5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4ce5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4ce5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce5e8: 0x0  nop
    ctx->pc = 0x4ce5e8u;
    // NOP
    // 0x4ce5ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4ce5ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ce5f0:
    // 0x4ce5f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4ce5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4ce5f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce5f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce5f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce5fc: 0x0  nop
    ctx->pc = 0x4ce5fcu;
    // NOP
    // 0x4ce600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ce600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4ce604: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x4ce604u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_4ce608:
    // 0x4ce608: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x4ce608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x4ce60c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce610: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce614: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ce614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4ce618: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x4ce618u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x4ce61c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x4ce61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce620: 0x0  nop
    ctx->pc = 0x4ce620u;
    // NOP
    // 0x4ce624: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4CE624u;
    {
        const bool branch_taken_0x4ce624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce624) {
            ctx->pc = 0x4CE628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE624u;
            // 0x4ce628: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE62Cu;
            goto label_4ce62c;
        }
    }
    ctx->pc = 0x4CE62Cu;
label_4ce62c:
    // 0x4ce62c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4ce62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4ce630: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4ce630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4ce634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4ce634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4ce638: 0x0  nop
    ctx->pc = 0x4ce638u;
    // NOP
    // 0x4ce63c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x4ce63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4ce640: 0x0  nop
    ctx->pc = 0x4ce640u;
    // NOP
    // 0x4ce644: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x4CE644u;
    {
        const bool branch_taken_0x4ce644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ce644) {
            ctx->pc = 0x4CE648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CE644u;
            // 0x4ce648: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CE64Cu;
            goto label_4ce64c;
        }
    }
    ctx->pc = 0x4CE64Cu;
label_4ce64c:
    // 0x4ce64c: 0xc133844  jal         func_4CE110
    ctx->pc = 0x4CE64Cu;
    SET_GPR_U32(ctx, 31, 0x4CE654u);
    ctx->pc = 0x4CE110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE110u, 0x4CE64Cu, 0x4CE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE654u;
label_4ce654:
    // 0x4ce654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ce654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce658: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE658u;
        // 0x4ce65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE660u;
    // 0x4ce660: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x4ce660u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x4ce664: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE664u;
        // 0x4ce668: 0x46060000  add.s       $f0, $f0, $f6 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE66Cu;
    // 0x4ce66c: 0x0  nop
    ctx->pc = 0x4ce66cu;
    // NOP
    ctx->pc = 0x4ce670u;
}
