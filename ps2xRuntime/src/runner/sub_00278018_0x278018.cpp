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

// Function: sub_00278018
// Address: 0x278018 - 0x278210
void sub_00278018_0x278018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278018_0x278018");
#endif

    switch (ctx->pc) {
        case 0x278018u: goto label_278018;
        case 0x27801cu: goto label_27801c;
        case 0x278020u: goto label_278020;
        case 0x278024u: goto label_278024;
        case 0x278028u: goto label_278028;
        case 0x27802cu: goto label_27802c;
        case 0x278030u: goto label_278030;
        case 0x278034u: goto label_278034;
        case 0x278038u: goto label_278038;
        case 0x27803cu: goto label_27803c;
        case 0x278040u: goto label_278040;
        case 0x278044u: goto label_278044;
        case 0x278048u: goto label_278048;
        case 0x27804cu: goto label_27804c;
        case 0x278050u: goto label_278050;
        case 0x278054u: goto label_278054;
        case 0x278058u: goto label_278058;
        case 0x27805cu: goto label_27805c;
        case 0x278060u: goto label_278060;
        case 0x278064u: goto label_278064;
        case 0x278068u: goto label_278068;
        case 0x27806cu: goto label_27806c;
        case 0x278070u: goto label_278070;
        case 0x278074u: goto label_278074;
        case 0x278078u: goto label_278078;
        case 0x27807cu: goto label_27807c;
        case 0x278080u: goto label_278080;
        case 0x278084u: goto label_278084;
        case 0x278088u: goto label_278088;
        case 0x27808cu: goto label_27808c;
        case 0x278090u: goto label_278090;
        case 0x278094u: goto label_278094;
        case 0x278098u: goto label_278098;
        case 0x27809cu: goto label_27809c;
        case 0x2780a0u: goto label_2780a0;
        case 0x2780a4u: goto label_2780a4;
        case 0x2780a8u: goto label_2780a8;
        case 0x2780acu: goto label_2780ac;
        case 0x2780b0u: goto label_2780b0;
        case 0x2780b4u: goto label_2780b4;
        case 0x2780b8u: goto label_2780b8;
        case 0x2780bcu: goto label_2780bc;
        case 0x2780c0u: goto label_2780c0;
        case 0x2780c4u: goto label_2780c4;
        case 0x2780c8u: goto label_2780c8;
        case 0x2780ccu: goto label_2780cc;
        case 0x2780d0u: goto label_2780d0;
        case 0x2780d4u: goto label_2780d4;
        case 0x2780d8u: goto label_2780d8;
        case 0x2780dcu: goto label_2780dc;
        case 0x2780e0u: goto label_2780e0;
        case 0x2780e4u: goto label_2780e4;
        case 0x2780e8u: goto label_2780e8;
        case 0x2780ecu: goto label_2780ec;
        case 0x2780f0u: goto label_2780f0;
        case 0x2780f4u: goto label_2780f4;
        case 0x2780f8u: goto label_2780f8;
        case 0x2780fcu: goto label_2780fc;
        case 0x278100u: goto label_278100;
        case 0x278104u: goto label_278104;
        case 0x278108u: goto label_278108;
        case 0x27810cu: goto label_27810c;
        case 0x278110u: goto label_278110;
        case 0x278114u: goto label_278114;
        case 0x278118u: goto label_278118;
        case 0x27811cu: goto label_27811c;
        case 0x278120u: goto label_278120;
        case 0x278124u: goto label_278124;
        case 0x278128u: goto label_278128;
        case 0x27812cu: goto label_27812c;
        case 0x278130u: goto label_278130;
        case 0x278134u: goto label_278134;
        case 0x278138u: goto label_278138;
        case 0x27813cu: goto label_27813c;
        case 0x278140u: goto label_278140;
        case 0x278144u: goto label_278144;
        case 0x278148u: goto label_278148;
        case 0x27814cu: goto label_27814c;
        case 0x278150u: goto label_278150;
        case 0x278154u: goto label_278154;
        case 0x278158u: goto label_278158;
        case 0x27815cu: goto label_27815c;
        case 0x278160u: goto label_278160;
        case 0x278164u: goto label_278164;
        case 0x278168u: goto label_278168;
        case 0x27816cu: goto label_27816c;
        case 0x278170u: goto label_278170;
        case 0x278174u: goto label_278174;
        case 0x278178u: goto label_278178;
        case 0x27817cu: goto label_27817c;
        case 0x278180u: goto label_278180;
        case 0x278184u: goto label_278184;
        case 0x278188u: goto label_278188;
        case 0x27818cu: goto label_27818c;
        case 0x278190u: goto label_278190;
        case 0x278194u: goto label_278194;
        case 0x278198u: goto label_278198;
        case 0x27819cu: goto label_27819c;
        case 0x2781a0u: goto label_2781a0;
        case 0x2781a4u: goto label_2781a4;
        case 0x2781a8u: goto label_2781a8;
        case 0x2781acu: goto label_2781ac;
        case 0x2781b0u: goto label_2781b0;
        case 0x2781b4u: goto label_2781b4;
        case 0x2781b8u: goto label_2781b8;
        case 0x2781bcu: goto label_2781bc;
        case 0x2781c0u: goto label_2781c0;
        case 0x2781c4u: goto label_2781c4;
        case 0x2781c8u: goto label_2781c8;
        case 0x2781ccu: goto label_2781cc;
        case 0x2781d0u: goto label_2781d0;
        case 0x2781d4u: goto label_2781d4;
        case 0x2781d8u: goto label_2781d8;
        case 0x2781dcu: goto label_2781dc;
        case 0x2781e0u: goto label_2781e0;
        case 0x2781e4u: goto label_2781e4;
        case 0x2781e8u: goto label_2781e8;
        case 0x2781ecu: goto label_2781ec;
        case 0x2781f0u: goto label_2781f0;
        case 0x2781f4u: goto label_2781f4;
        case 0x2781f8u: goto label_2781f8;
        case 0x2781fcu: goto label_2781fc;
        case 0x278200u: goto label_278200;
        case 0x278204u: goto label_278204;
        case 0x278208u: goto label_278208;
        case 0x27820cu: goto label_27820c;
        default: break;
    }

    ctx->pc = 0x278018u;

label_278018:
    // 0x278018: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x278018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27801c:
    // 0x27801c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x27801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_278020:
    // 0x278020: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x278020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_278024:
    // 0x278024: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_278028:
    // 0x278028: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x278028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_27802c:
    // 0x27802c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_278030:
    // 0x278030: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x278030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_278034:
    // 0x278034: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x278034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_278038:
    // 0x278038: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x278038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_27803c:
    // 0x27803c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_278040:
    // 0x278040: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x278040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_278044:
    // 0x278044: 0xc0e4060  jal         func_390180
label_278048:
    if (ctx->pc == 0x278048u) {
        ctx->pc = 0x278048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278044u;
        // 0x278048: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27804Cu;
        goto label_27804c;
    }
    ctx->pc = 0x278044u;
    SET_GPR_U32(ctx, 31, 0x27804Cu);
    ctx->pc = 0x278048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278044u;
    // 0x278048: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x278044u, 0x27804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27804Cu;
label_27804c:
    // 0x27804c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27804cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278050:
    // 0x278050: 0x12a00066  beqz        $s5, . + 4 + (0x66 << 2)
label_278054:
    if (ctx->pc == 0x278054u) {
        ctx->pc = 0x278054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278050u;
        // 0x278054: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278058u;
        goto label_278058;
    }
    ctx->pc = 0x278050u;
    {
        const bool branch_taken_0x278050 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x278054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278050u;
        // 0x278054: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278050) {
            ctx->pc = 0x2781ECu;
            goto label_2781ec;
        }
    }
    ctx->pc = 0x278058u;
label_278058:
    // 0x278058: 0xc089000  jal         func_224000
label_27805c:
    if (ctx->pc == 0x27805Cu) {
        ctx->pc = 0x27805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278058u;
        // 0x27805c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278060u;
        goto label_278060;
    }
    ctx->pc = 0x278058u;
    SET_GPR_U32(ctx, 31, 0x278060u);
    ctx->pc = 0x27805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278058u;
    // 0x27805c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x278058u, 0x278060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278060u;
label_278060:
    // 0x278060: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_278064:
    if (ctx->pc == 0x278064u) {
        ctx->pc = 0x278064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278060u;
        // 0x278064: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278068u;
        goto label_278068;
    }
    ctx->pc = 0x278060u;
    {
        const bool branch_taken_0x278060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278060) {
            ctx->pc = 0x278064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278060u;
            // 0x278064: 0x3c100056  lui         $s0, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278074u;
            goto label_278074;
        }
    }
    ctx->pc = 0x278068u;
label_278068:
    // 0x278068: 0xc095fce  jal         func_257F38
label_27806c:
    if (ctx->pc == 0x27806Cu) {
        ctx->pc = 0x27806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278068u;
        // 0x27806c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278070u;
        goto label_278070;
    }
    ctx->pc = 0x278068u;
    SET_GPR_U32(ctx, 31, 0x278070u);
    ctx->pc = 0x27806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278068u;
    // 0x27806c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x278068u, 0x278070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278070u;
label_278070:
    // 0x278070: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x278070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_278074:
    // 0x278074: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x278074u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_278078:
    // 0x278078: 0x2610e758  addiu       $s0, $s0, -0x18A8
    ctx->pc = 0x278078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960984));
label_27807c:
    // 0x27807c: 0xc041532  jal         func_1054C8
label_278080:
    if (ctx->pc == 0x278080u) {
        ctx->pc = 0x278080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27807Cu;
        // 0x278080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278084u;
        goto label_278084;
    }
    ctx->pc = 0x27807Cu;
    SET_GPR_U32(ctx, 31, 0x278084u);
    ctx->pc = 0x278080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27807Cu;
    // 0x278080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27807Cu, 0x278084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278084u;
label_278084:
    // 0x278084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278088:
    // 0x278088: 0xc041532  jal         func_1054C8
label_27808c:
    if (ctx->pc == 0x27808Cu) {
        ctx->pc = 0x27808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278088u;
        // 0x27808c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278090u;
        goto label_278090;
    }
    ctx->pc = 0x278088u;
    SET_GPR_U32(ctx, 31, 0x278090u);
    ctx->pc = 0x27808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278088u;
    // 0x27808c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278088u, 0x278090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278090u;
label_278090:
    // 0x278090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278094:
    // 0x278094: 0xc041532  jal         func_1054C8
label_278098:
    if (ctx->pc == 0x278098u) {
        ctx->pc = 0x278098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278094u;
        // 0x278098: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27809Cu;
        goto label_27809c;
    }
    ctx->pc = 0x278094u;
    SET_GPR_U32(ctx, 31, 0x27809Cu);
    ctx->pc = 0x278098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278094u;
    // 0x278098: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x278094u, 0x27809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27809Cu;
label_27809c:
    // 0x27809c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2780a0:
    if (ctx->pc == 0x2780A0u) {
        ctx->pc = 0x2780A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27809Cu;
        // 0x2780a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2780A4u;
        goto label_2780a4;
    }
    ctx->pc = 0x27809Cu;
    {
        const bool branch_taken_0x27809c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2780A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27809Cu;
        // 0x2780a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27809c) {
            ctx->pc = 0x2780D4u;
            goto label_2780d4;
        }
    }
    ctx->pc = 0x2780A4u;
label_2780a4:
    // 0x2780a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2780a8:
    // 0x2780a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2780a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2780ac:
    // 0x2780ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2780acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2780b0:
    // 0x2780b0: 0x40f809  jalr        $v0
label_2780b4:
    if (ctx->pc == 0x2780B4u) {
        ctx->pc = 0x2780B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780B0u;
        // 0x2780b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2780B8u;
        goto label_2780b8;
    }
    ctx->pc = 0x2780B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2780B8u);
        ctx->pc = 0x2780B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780B0u;
        // 0x2780b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2780B0u, 0x2780B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2780B8u;
label_2780b8:
    // 0x2780b8: 0x3c080027  lui         $t0, 0x27
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)39 << 16));
label_2780bc:
    // 0x2780bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2780bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2780c0:
    // 0x2780c0: 0x25087f28  addiu       $t0, $t0, 0x7F28
    ctx->pc = 0x2780c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32552));
label_2780c4:
    // 0x2780c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2780c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2780c8:
    // 0x2780c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2780c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2780cc:
    // 0x2780cc: 0xc04159e  jal         func_105678
label_2780d0:
    if (ctx->pc == 0x2780D0u) {
        ctx->pc = 0x2780D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780CCu;
        // 0x2780d0: 0x2406014f  addiu       $a2, $zero, 0x14F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2780D4u;
        goto label_2780d4;
    }
    ctx->pc = 0x2780CCu;
    SET_GPR_U32(ctx, 31, 0x2780D4u);
    ctx->pc = 0x2780D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2780CCu;
    // 0x2780d0: 0x2406014f  addiu       $a2, $zero, 0x14F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2780CCu, 0x2780D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780D4u;
label_2780d4:
    // 0x2780d4: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_2780d8:
    if (ctx->pc == 0x2780D8u) {
        ctx->pc = 0x2780DCu;
        goto label_2780dc;
    }
    ctx->pc = 0x2780D4u;
    {
        const bool branch_taken_0x2780d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2780d4) {
            ctx->pc = 0x278118u;
            goto label_278118;
        }
    }
    ctx->pc = 0x2780DCu;
label_2780dc:
    // 0x2780dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2780dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2780e0:
    // 0x2780e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2780e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2780e4:
    // 0x2780e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2780e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2780e8:
    // 0x2780e8: 0x40f809  jalr        $v0
label_2780ec:
    if (ctx->pc == 0x2780ECu) {
        ctx->pc = 0x2780ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780E8u;
        // 0x2780ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2780F0u;
        goto label_2780f0;
    }
    ctx->pc = 0x2780E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2780F0u);
        ctx->pc = 0x2780ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780E8u;
        // 0x2780ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2780E8u, 0x2780F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2780F0u;
label_2780f0:
    // 0x2780f0: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x2780f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_2780f4:
    // 0x2780f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2780f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2780f8:
    // 0x2780f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2780f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2780fc:
    // 0x2780fc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2780fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278100:
    // 0x278100: 0x254a7ed8  addiu       $t2, $t2, 0x7ED8
    ctx->pc = 0x278100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32472));
label_278104:
    // 0x278104: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x278104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278108:
    // 0x278108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x278108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27810c:
    // 0x27810c: 0x2406014e  addiu       $a2, $zero, 0x14E
    ctx->pc = 0x27810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_278110:
    // 0x278110: 0xc041664  jal         func_105990
label_278114:
    if (ctx->pc == 0x278114u) {
        ctx->pc = 0x278114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278110u;
        // 0x278114: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278118u;
        goto label_278118;
    }
    ctx->pc = 0x278110u;
    SET_GPR_U32(ctx, 31, 0x278118u);
    ctx->pc = 0x278114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278110u;
    // 0x278114: 0x24080400  addiu       $t0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x278110u, 0x278118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278118u;
label_278118:
    // 0x278118: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_27811c:
    if (ctx->pc == 0x27811Cu) {
        ctx->pc = 0x27811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278118u;
        // 0x27811c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278120u;
        goto label_278120;
    }
    ctx->pc = 0x278118u;
    {
        const bool branch_taken_0x278118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278118u;
        // 0x27811c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278118) {
            ctx->pc = 0x278140u;
            goto label_278140;
        }
    }
    ctx->pc = 0x278120u;
label_278120:
    // 0x278120: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x278120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_278124:
    // 0x278124: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x278124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_278128:
    // 0x278128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27812c:
    // 0x27812c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x27812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_278130:
    // 0x278130: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_278134:
    // 0x278134: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278138:
    // 0x278138: 0xc041b20  jal         func_106C80
label_27813c:
    if (ctx->pc == 0x27813Cu) {
        ctx->pc = 0x27813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278138u;
        // 0x27813c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278140u;
        goto label_278140;
    }
    ctx->pc = 0x278138u;
    SET_GPR_U32(ctx, 31, 0x278140u);
    ctx->pc = 0x27813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278138u;
    // 0x27813c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x278138u, 0x278140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278140u;
label_278140:
    // 0x278140: 0xc05d484  jal         func_175210
label_278144:
    if (ctx->pc == 0x278144u) {
        ctx->pc = 0x278144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278140u;
        // 0x278144: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278148u;
        goto label_278148;
    }
    ctx->pc = 0x278140u;
    SET_GPR_U32(ctx, 31, 0x278148u);
    ctx->pc = 0x278144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278140u;
    // 0x278144: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x278140u, 0x278148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278148u;
label_278148:
    // 0x278148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27814c:
    // 0x27814c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x27814cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_278150:
    // 0x278150: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x278150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_278154:
    // 0x278154: 0xa0f809  jalr        $a1
label_278158:
    if (ctx->pc == 0x278158u) {
        ctx->pc = 0x278158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278154u;
        // 0x278158: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27815Cu;
        goto label_27815c;
    }
    ctx->pc = 0x278154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x27815Cu);
        ctx->pc = 0x278158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278154u;
        // 0x278158: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278154u, 0x27815Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27815Cu;
label_27815c:
    // 0x27815c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278160:
    // 0x278160: 0xc087016  jal         func_21C058
label_278164:
    if (ctx->pc == 0x278164u) {
        ctx->pc = 0x278164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278160u;
        // 0x278164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278168u;
        goto label_278168;
    }
    ctx->pc = 0x278160u;
    SET_GPR_U32(ctx, 31, 0x278168u);
    ctx->pc = 0x278164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278160u;
    // 0x278164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x278160u, 0x278168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278168u;
label_278168:
    // 0x278168: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x278168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27816c:
    // 0x27816c: 0xc05d53a  jal         func_1754E8
label_278170:
    if (ctx->pc == 0x278170u) {
        ctx->pc = 0x278170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27816Cu;
        // 0x278170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278174u;
        goto label_278174;
    }
    ctx->pc = 0x27816Cu;
    SET_GPR_U32(ctx, 31, 0x278174u);
    ctx->pc = 0x278170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27816Cu;
    // 0x278170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x27816Cu, 0x278174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278174u;
label_278174:
    // 0x278174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x278174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_278178:
    // 0x278178: 0xc05d4f6  jal         func_1753D8
label_27817c:
    if (ctx->pc == 0x27817Cu) {
        ctx->pc = 0x27817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278178u;
        // 0x27817c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278180u;
        goto label_278180;
    }
    ctx->pc = 0x278178u;
    SET_GPR_U32(ctx, 31, 0x278180u);
    ctx->pc = 0x27817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278178u;
    // 0x27817c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x278178u, 0x278180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278180u;
label_278180:
    // 0x278180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278184:
    // 0x278184: 0xc089990  jal         func_226640
label_278188:
    if (ctx->pc == 0x278188u) {
        ctx->pc = 0x278188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278184u;
        // 0x278188: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27818Cu;
        goto label_27818c;
    }
    ctx->pc = 0x278184u;
    SET_GPR_U32(ctx, 31, 0x27818Cu);
    ctx->pc = 0x278188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278184u;
    // 0x278188: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x278184u, 0x27818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27818Cu;
label_27818c:
    // 0x27818c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x27818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_278190:
    // 0x278190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278194:
    // 0x278194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278198:
    // 0x278198: 0xc0899aa  jal         func_2266A8
label_27819c:
    if (ctx->pc == 0x27819Cu) {
        ctx->pc = 0x27819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278198u;
        // 0x27819c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2781A0u;
        goto label_2781a0;
    }
    ctx->pc = 0x278198u;
    SET_GPR_U32(ctx, 31, 0x2781A0u);
    ctx->pc = 0x27819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278198u;
    // 0x27819c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x278198u, 0x2781A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781A0u;
label_2781a0:
    // 0x2781a0: 0xa22003ba  sb          $zero, 0x3BA($s1)
    ctx->pc = 0x2781a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 954), (uint8_t)GPR_U32(ctx, 0));
label_2781a4:
    // 0x2781a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2781a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2781a8:
    // 0x2781a8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2781a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2781ac:
    // 0x2781ac: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2781acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2781b0:
    // 0x2781b0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2781b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2781b4:
    // 0x2781b4: 0x60f809  jalr        $v1
label_2781b8:
    if (ctx->pc == 0x2781B8u) {
        ctx->pc = 0x2781B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781B4u;
        // 0x2781b8: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2781BCu;
        goto label_2781bc;
    }
    ctx->pc = 0x2781B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2781BCu);
        ctx->pc = 0x2781B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781B4u;
        // 0x2781b8: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2781B4u, 0x2781BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2781BCu;
label_2781bc:
    // 0x2781bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2781bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2781c0:
    // 0x2781c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2781c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2781c4:
    // 0x2781c4: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x2781c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_2781c8:
    // 0x2781c8: 0xc040680  jal         func_101A00
label_2781cc:
    if (ctx->pc == 0x2781CCu) {
        ctx->pc = 0x2781CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781C8u;
        // 0x2781cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2781D0u;
        goto label_2781d0;
    }
    ctx->pc = 0x2781C8u;
    SET_GPR_U32(ctx, 31, 0x2781D0u);
    ctx->pc = 0x2781CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781C8u;
    // 0x2781cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2781C8u, 0x2781D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781D0u;
label_2781d0:
    // 0x2781d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2781d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2781d4:
    // 0x2781d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2781d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2781d8:
    // 0x2781d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2781d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2781dc:
    // 0x2781dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2781dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2781e0:
    // 0x2781e0: 0xc088708  jal         func_221C20
label_2781e4:
    if (ctx->pc == 0x2781E4u) {
        ctx->pc = 0x2781E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781E0u;
        // 0x2781e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2781E8u;
        goto label_2781e8;
    }
    ctx->pc = 0x2781E0u;
    SET_GPR_U32(ctx, 31, 0x2781E8u);
    ctx->pc = 0x2781E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781E0u;
    // 0x2781e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2781E0u, 0x2781E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781E8u;
label_2781e8:
    // 0x2781e8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2781e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2781ec:
    // 0x2781ec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2781ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2781f0:
    // 0x2781f0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2781f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2781f4:
    // 0x2781f4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2781f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2781f8:
    // 0x2781f8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2781f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2781fc:
    // 0x2781fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2781fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_278200:
    // 0x278200: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_278204:
    // 0x278204: 0x3e00008  jr          $ra
label_278208:
    if (ctx->pc == 0x278208u) {
        ctx->pc = 0x278208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278204u;
        // 0x278208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27820Cu;
        goto label_27820c;
    }
    ctx->pc = 0x278204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278204u;
        // 0x278208: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27820Cu;
label_27820c:
    // 0x27820c: 0x0  nop
    ctx->pc = 0x27820cu;
    // NOP
    ctx->pc = 0x278210u;
}
