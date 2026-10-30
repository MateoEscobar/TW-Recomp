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

// Function: sub_00313508
// Address: 0x313508 - 0x313718
void sub_00313508_0x313508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313508_0x313508");
#endif

    switch (ctx->pc) {
        case 0x31354cu: goto label_31354c;
        case 0x313578u: goto label_313578;
        case 0x313580u: goto label_313580;
        case 0x31359cu: goto label_31359c;
        case 0x3135f4u: goto label_3135f4;
        case 0x313620u: goto label_313620;
        case 0x313628u: goto label_313628;
        case 0x313630u: goto label_313630;
        case 0x31365cu: goto label_31365c;
        case 0x313670u: goto label_313670;
        case 0x313678u: goto label_313678;
        case 0x313684u: goto label_313684;
        case 0x313698u: goto label_313698;
        case 0x3136b0u: goto label_3136b0;
        case 0x3136c8u: goto label_3136c8;
        default: break;
    }

    ctx->pc = 0x313508u;

    // 0x313508: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x313508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31350c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x313510: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x313510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x313514: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x313514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313518: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x313518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x31351c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x313520: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x313520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x313524: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x313524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x313528: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x313528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x31352c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x313530: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x313530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x313534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x313538: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x313538u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x31353c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x31353cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x313540: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x313540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x313544: 0xc05959e  jal         func_165678
    ctx->pc = 0x313544u;
    SET_GPR_U32(ctx, 31, 0x31354Cu);
    ctx->pc = 0x313548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313544u;
    // 0x313548: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x313544u, 0x31354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31354Cu;
label_31354c:
    // 0x31354c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31354cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313550: 0x12a00062  beqz        $s5, . + 4 + (0x62 << 2)
    ctx->pc = 0x313550u;
    {
        const bool branch_taken_0x313550 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x313554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313550u;
        // 0x313554: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313550) {
            ctx->pc = 0x3136DCu;
            goto label_3136dc;
        }
    }
    ctx->pc = 0x313558u;
    // 0x313558: 0x86a50092  lh          $a1, 0x92($s5)
    ctx->pc = 0x313558u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x31355c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x31355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x313560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x313560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313564: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x313564u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x313568: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x313568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x31356c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31356cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x313570: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x313570u;
    SET_GPR_U32(ctx, 31, 0x313578u);
    ctx->pc = 0x313574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313570u;
    // 0x313574: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x313570u, 0x313578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313578u;
label_313578:
    // 0x313578: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x313578u;
    SET_GPR_U32(ctx, 31, 0x313580u);
    ctx->pc = 0x31357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313578u;
    // 0x31357c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x313578u, 0x313580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313580u;
label_313580:
    // 0x313580: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x313584: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x313584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x313588: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x313588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31358c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313590: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x313590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x313594: 0xc059856  jal         func_166158
    ctx->pc = 0x313594u;
    SET_GPR_U32(ctx, 31, 0x31359Cu);
    ctx->pc = 0x313598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313594u;
    // 0x313598: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x313594u, 0x31359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31359Cu;
label_31359c:
    // 0x31359c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3135a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3135A0u;
    {
        const bool branch_taken_0x3135a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3135a0) {
            ctx->pc = 0x3135ECu;
            goto label_3135ec;
        }
    }
    ctx->pc = 0x3135A8u;
    // 0x3135a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3135A8u;
    {
        const bool branch_taken_0x3135a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3135ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135A8u;
        // 0x3135ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135a8) {
            ctx->pc = 0x3135C4u;
            goto label_3135c4;
        }
    }
    ctx->pc = 0x3135B0u;
    // 0x3135b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135b4: 0x0  nop
    ctx->pc = 0x3135b4u;
    // NOP
    // 0x3135b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3135b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3135bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3135BCu;
    {
        const bool branch_taken_0x3135bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3135bc) {
            ctx->pc = 0x3135DCu;
            goto label_3135dc;
        }
    }
    ctx->pc = 0x3135C4u;
label_3135c4:
    // 0x3135c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3135c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3135c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3135c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3135cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3135ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3135d0: 0x0  nop
    ctx->pc = 0x3135d0u;
    // NOP
    // 0x3135d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3135d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3135d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3135d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3135dc:
    // 0x3135dc: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x3135dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x3135e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3135e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3135e4: 0x0  nop
    ctx->pc = 0x3135e4u;
    // NOP
    // 0x3135e8: 0x46010583  div.s       $f22, $f0, $f1
    ctx->pc = 0x3135e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3135ec:
    // 0x3135ec: 0xc059688  jal         func_165A20
    ctx->pc = 0x3135ECu;
    SET_GPR_U32(ctx, 31, 0x3135F4u);
    ctx->pc = 0x3135F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135ECu;
    // 0x3135f0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165A20u, 0x3135ECu, 0x3135F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135F4u;
label_3135f4:
    // 0x3135f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3135f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3135f8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3135F8u;
    {
        const bool branch_taken_0x3135f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3135FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135F8u;
        // 0x3135fc: 0x241707d0  addiu       $s7, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135f8) {
            ctx->pc = 0x31360Cu;
            goto label_31360c;
        }
    }
    ctx->pc = 0x313600u;
    // 0x313600: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x313600u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313604: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313604u;
    {
        const bool branch_taken_0x313604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313604u;
        // 0x313608: 0x241603e8  addiu       $s6, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313604) {
            ctx->pc = 0x313610u;
            goto label_313610;
        }
    }
    ctx->pc = 0x31360Cu;
label_31360c:
    // 0x31360c: 0x24160fa0  addiu       $s6, $zero, 0xFA0
    ctx->pc = 0x31360cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_313610:
    // 0x313610: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x313610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x313614: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x313614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313618: 0x245e0048  addiu       $fp, $v0, 0x48
    ctx->pc = 0x313618u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31361c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_313620:
    // 0x313620: 0xc137826  jal         func_4DE098
    ctx->pc = 0x313620u;
    SET_GPR_U32(ctx, 31, 0x313628u);
    ctx->pc = 0x313624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313620u;
    // 0x313624: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x313620u, 0x313628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313628u;
label_313628:
    // 0x313628: 0xc0e409a  jal         func_390268
    ctx->pc = 0x313628u;
    SET_GPR_U32(ctx, 31, 0x313630u);
    ctx->pc = 0x31362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313628u;
    // 0x31362c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x313628u, 0x313630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313630u;
label_313630:
    // 0x313630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313634: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x313634u;
    {
        const bool branch_taken_0x313634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x313634) {
            ctx->pc = 0x313638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313634u;
            // 0x313638: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3136D0u;
            goto label_3136d0;
        }
    }
    ctx->pc = 0x31363Cu;
    // 0x31363c: 0x52150024  beql        $s0, $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x31363Cu;
    {
        const bool branch_taken_0x31363c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x31363c) {
            ctx->pc = 0x313640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31363Cu;
            // 0x313640: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3136D0u;
            goto label_3136d0;
        }
    }
    ctx->pc = 0x313644u;
    // 0x313644: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x313644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x313648: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x313648u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31364c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x31364Cu;
    {
        const bool branch_taken_0x31364c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31364Cu;
        // 0x313650: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31364c) {
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x313654u;
    // 0x313654: 0xc089f98  jal         func_227E60
    ctx->pc = 0x313654u;
    SET_GPR_U32(ctx, 31, 0x31365Cu);
    ctx->pc = 0x313658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313654u;
    // 0x313658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x313654u, 0x31365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31365Cu;
label_31365c:
    // 0x31365c: 0x1051001b  beq         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x31365Cu;
    {
        const bool branch_taken_0x31365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x313660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31365Cu;
        // 0x313660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31365c) {
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x313664u;
    // 0x313664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313668: 0xc0c4dc6  jal         func_313718
    ctx->pc = 0x313668u;
    SET_GPR_U32(ctx, 31, 0x313670u);
    ctx->pc = 0x31366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313668u;
    // 0x31366c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313718u, 0x313668u, 0x313670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313670u;
label_313670:
    // 0x313670: 0xc087502  jal         func_21D408
    ctx->pc = 0x313670u;
    SET_GPR_U32(ctx, 31, 0x313678u);
    ctx->pc = 0x313674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313670u;
    // 0x313674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x313670u, 0x313678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313678u;
label_313678:
    // 0x313678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x313678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31367c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x31367Cu;
    SET_GPR_U32(ctx, 31, 0x313684u);
    ctx->pc = 0x313680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31367Cu;
    // 0x313680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x31367Cu, 0x313684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313684u;
label_313684:
    // 0x313684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313688: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x313688u;
    {
        const bool branch_taken_0x313688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x313688) {
            ctx->pc = 0x31368Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313688u;
            // 0x31368c: 0x4616ad40  add.s       $f21, $f21, $f22 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x313690u;
    // 0x313690: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x313690u;
    SET_GPR_U32(ctx, 31, 0x313698u);
    ctx->pc = 0x313694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313690u;
    // 0x313694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x313690u, 0x313698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313698u;
label_313698:
    // 0x313698: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x313698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x31369c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x31369cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3136a0: 0x2444b8a0  addiu       $a0, $v0, -0x4760
    ctx->pc = 0x3136a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
    // 0x3136a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3136a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136a8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x3136A8u;
    SET_GPR_U32(ctx, 31, 0x3136B0u);
    ctx->pc = 0x3136ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136A8u;
    // 0x3136ac: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x3136A8u, 0x3136B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136B0u;
label_3136b0:
    // 0x3136b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3136b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3136b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136b8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3136b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3136bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3136bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136c0: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x3136C0u;
    SET_GPR_U32(ctx, 31, 0x3136C8u);
    ctx->pc = 0x3136C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136C0u;
    // 0x3136c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x3136C0u, 0x3136C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136C8u;
label_3136c8:
    // 0x3136c8: 0x4616ad40  add.s       $f21, $f21, $f22
    ctx->pc = 0x3136c8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_3136cc:
    // 0x3136cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3136ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3136d0:
    // 0x3136d0: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x3136d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3136d4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x3136D4u;
    {
        const bool branch_taken_0x3136d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3136D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D4u;
        // 0x3136d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136d4) {
            ctx->pc = 0x313620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313620;
        }
    }
    ctx->pc = 0x3136DCu;
label_3136dc:
    // 0x3136dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3136dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3136e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3136e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3136e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3136e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3136e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3136e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3136ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3136ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3136f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3136f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3136f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3136f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3136f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3136f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3136fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3136fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313704: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x313704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x313708: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x313708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31370c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x31370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313710: 0x3e00008  jr          $ra
    ctx->pc = 0x313710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313710u;
        // 0x313714: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313718u;
}
