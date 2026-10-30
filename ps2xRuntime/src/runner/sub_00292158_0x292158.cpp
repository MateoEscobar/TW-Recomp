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

// Function: sub_00292158
// Address: 0x292158 - 0x2922a8
void sub_00292158_0x292158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292158_0x292158");
#endif

    switch (ctx->pc) {
        case 0x292158u: goto label_292158;
        case 0x29215cu: goto label_29215c;
        case 0x292160u: goto label_292160;
        case 0x292164u: goto label_292164;
        case 0x292168u: goto label_292168;
        case 0x29216cu: goto label_29216c;
        case 0x292170u: goto label_292170;
        case 0x292174u: goto label_292174;
        case 0x292178u: goto label_292178;
        case 0x29217cu: goto label_29217c;
        case 0x292180u: goto label_292180;
        case 0x292184u: goto label_292184;
        case 0x292188u: goto label_292188;
        case 0x29218cu: goto label_29218c;
        case 0x292190u: goto label_292190;
        case 0x292194u: goto label_292194;
        case 0x292198u: goto label_292198;
        case 0x29219cu: goto label_29219c;
        case 0x2921a0u: goto label_2921a0;
        case 0x2921a4u: goto label_2921a4;
        case 0x2921a8u: goto label_2921a8;
        case 0x2921acu: goto label_2921ac;
        case 0x2921b0u: goto label_2921b0;
        case 0x2921b4u: goto label_2921b4;
        case 0x2921b8u: goto label_2921b8;
        case 0x2921bcu: goto label_2921bc;
        case 0x2921c0u: goto label_2921c0;
        case 0x2921c4u: goto label_2921c4;
        case 0x2921c8u: goto label_2921c8;
        case 0x2921ccu: goto label_2921cc;
        case 0x2921d0u: goto label_2921d0;
        case 0x2921d4u: goto label_2921d4;
        case 0x2921d8u: goto label_2921d8;
        case 0x2921dcu: goto label_2921dc;
        case 0x2921e0u: goto label_2921e0;
        case 0x2921e4u: goto label_2921e4;
        case 0x2921e8u: goto label_2921e8;
        case 0x2921ecu: goto label_2921ec;
        case 0x2921f0u: goto label_2921f0;
        case 0x2921f4u: goto label_2921f4;
        case 0x2921f8u: goto label_2921f8;
        case 0x2921fcu: goto label_2921fc;
        case 0x292200u: goto label_292200;
        case 0x292204u: goto label_292204;
        case 0x292208u: goto label_292208;
        case 0x29220cu: goto label_29220c;
        case 0x292210u: goto label_292210;
        case 0x292214u: goto label_292214;
        case 0x292218u: goto label_292218;
        case 0x29221cu: goto label_29221c;
        case 0x292220u: goto label_292220;
        case 0x292224u: goto label_292224;
        case 0x292228u: goto label_292228;
        case 0x29222cu: goto label_29222c;
        case 0x292230u: goto label_292230;
        case 0x292234u: goto label_292234;
        case 0x292238u: goto label_292238;
        case 0x29223cu: goto label_29223c;
        case 0x292240u: goto label_292240;
        case 0x292244u: goto label_292244;
        case 0x292248u: goto label_292248;
        case 0x29224cu: goto label_29224c;
        case 0x292250u: goto label_292250;
        case 0x292254u: goto label_292254;
        case 0x292258u: goto label_292258;
        case 0x29225cu: goto label_29225c;
        case 0x292260u: goto label_292260;
        case 0x292264u: goto label_292264;
        case 0x292268u: goto label_292268;
        case 0x29226cu: goto label_29226c;
        case 0x292270u: goto label_292270;
        case 0x292274u: goto label_292274;
        case 0x292278u: goto label_292278;
        case 0x29227cu: goto label_29227c;
        case 0x292280u: goto label_292280;
        case 0x292284u: goto label_292284;
        case 0x292288u: goto label_292288;
        case 0x29228cu: goto label_29228c;
        case 0x292290u: goto label_292290;
        case 0x292294u: goto label_292294;
        case 0x292298u: goto label_292298;
        case 0x29229cu: goto label_29229c;
        case 0x2922a0u: goto label_2922a0;
        case 0x2922a4u: goto label_2922a4;
        default: break;
    }

    ctx->pc = 0x292158u;

label_292158:
    // 0x292158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29215c:
    // 0x29215c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_292160:
    // 0x292160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x292160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_292164:
    // 0x292164: 0x24b005d0  addiu       $s0, $a1, 0x5D0
    ctx->pc = 0x292164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1488));
label_292168:
    // 0x292168: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x292168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_29216c:
    // 0x29216c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29216cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292170:
    // 0x292170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_292174:
    // 0x292174: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x292174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_292178:
    // 0x292178: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29217c:
    // 0x29217c: 0xc088db2  jal         func_2236C8
label_292180:
    if (ctx->pc == 0x292180u) {
        ctx->pc = 0x292180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29217Cu;
        // 0x292180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292184u;
        goto label_292184;
    }
    ctx->pc = 0x29217Cu;
    SET_GPR_U32(ctx, 31, 0x292184u);
    ctx->pc = 0x292180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29217Cu;
    // 0x292180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236C8u, 0x29217Cu, 0x292184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292184u;
label_292184:
    // 0x292184: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x292184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_292188:
    // 0x292188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x292188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29218c:
    // 0x29218c: 0x0  nop
    ctx->pc = 0x29218cu;
    // NOP
label_292190:
    // 0x292190: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x292190u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_292194:
    // 0x292194: 0x0  nop
    ctx->pc = 0x292194u;
    // NOP
label_292198:
    // 0x292198: 0x4503003c  bc1tl       . + 4 + (0x3C << 2)
label_29219c:
    if (ctx->pc == 0x29219Cu) {
        ctx->pc = 0x29219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292198u;
        // 0x29219c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921A0u;
        goto label_2921a0;
    }
    ctx->pc = 0x292198u;
    {
        const bool branch_taken_0x292198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x292198) {
            ctx->pc = 0x29219Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292198u;
            // 0x29219c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x2921A0u;
label_2921a0:
    // 0x2921a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2921a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2921a4:
    // 0x2921a4: 0xc1060e6  jal         func_418398
label_2921a8:
    if (ctx->pc == 0x2921A8u) {
        ctx->pc = 0x2921A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921A4u;
        // 0x2921a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921ACu;
        goto label_2921ac;
    }
    ctx->pc = 0x2921A4u;
    SET_GPR_U32(ctx, 31, 0x2921ACu);
    ctx->pc = 0x2921A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921A4u;
    // 0x2921a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x2921A4u, 0x2921ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921ACu;
label_2921ac:
    // 0x2921ac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2921acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2921b0:
    // 0x2921b0: 0x0  nop
    ctx->pc = 0x2921b0u;
    // NOP
label_2921b4:
    // 0x2921b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2921b8:
    if (ctx->pc == 0x2921B8u) {
        ctx->pc = 0x2921B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921B4u;
        // 0x2921b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921BCu;
        goto label_2921bc;
    }
    ctx->pc = 0x2921B4u;
    {
        const bool branch_taken_0x2921b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2921B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921B4u;
        // 0x2921b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921b4) {
            ctx->pc = 0x2921D4u;
            goto label_2921d4;
        }
    }
    ctx->pc = 0x2921BCu;
label_2921bc:
    // 0x2921bc: 0xc1060e6  jal         func_418398
label_2921c0:
    if (ctx->pc == 0x2921C0u) {
        ctx->pc = 0x2921C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921BCu;
        // 0x2921c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921C4u;
        goto label_2921c4;
    }
    ctx->pc = 0x2921BCu;
    SET_GPR_U32(ctx, 31, 0x2921C4u);
    ctx->pc = 0x2921C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921BCu;
    // 0x2921c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418398u, 0x2921BCu, 0x2921C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921C4u;
label_2921c4:
    // 0x2921c4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2921c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2921c8:
    // 0x2921c8: 0x0  nop
    ctx->pc = 0x2921c8u;
    // NOP
label_2921cc:
    // 0x2921cc: 0x4503002f  bc1tl       . + 4 + (0x2F << 2)
label_2921d0:
    if (ctx->pc == 0x2921D0u) {
        ctx->pc = 0x2921D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921CCu;
        // 0x2921d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921D4u;
        goto label_2921d4;
    }
    ctx->pc = 0x2921CCu;
    {
        const bool branch_taken_0x2921cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2921cc) {
            ctx->pc = 0x2921D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2921CCu;
            // 0x2921d0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x2921D4u;
label_2921d4:
    // 0x2921d4: 0xc08a08a  jal         func_228228
label_2921d8:
    if (ctx->pc == 0x2921D8u) {
        ctx->pc = 0x2921D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921D4u;
        // 0x2921d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921DCu;
        goto label_2921dc;
    }
    ctx->pc = 0x2921D4u;
    SET_GPR_U32(ctx, 31, 0x2921DCu);
    ctx->pc = 0x2921D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921D4u;
    // 0x2921d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2921D4u, 0x2921DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921DCu;
label_2921dc:
    // 0x2921dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2921dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2921e0:
    // 0x2921e0: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
label_2921e4:
    if (ctx->pc == 0x2921E4u) {
        ctx->pc = 0x2921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921E0u;
        // 0x2921e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921E8u;
        goto label_2921e8;
    }
    ctx->pc = 0x2921E0u;
    {
        const bool branch_taken_0x2921e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921E0u;
        // 0x2921e4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921e0) {
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x2921E8u;
label_2921e8:
    // 0x2921e8: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_2921ec:
    // 0x2921ec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2921f0:
    if (ctx->pc == 0x2921F0u) {
        ctx->pc = 0x2921F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921ECu;
        // 0x2921f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2921F4u;
        goto label_2921f4;
    }
    ctx->pc = 0x2921ECu;
    {
        const bool branch_taken_0x2921ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2921F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921ECu;
        // 0x2921f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921ec) {
            ctx->pc = 0x292200u;
            goto label_292200;
        }
    }
    ctx->pc = 0x2921F4u;
label_2921f4:
    // 0x2921f4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2921f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2921f8:
    // 0x2921f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2921fc:
    if (ctx->pc == 0x2921FCu) {
        ctx->pc = 0x2921FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921F8u;
        // 0x2921fc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292200u;
        goto label_292200;
    }
    ctx->pc = 0x2921F8u;
    {
        const bool branch_taken_0x2921f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921F8u;
        // 0x2921fc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921f8) {
            ctx->pc = 0x292204u;
            goto label_292204;
        }
    }
    ctx->pc = 0x292200u;
label_292200:
    // 0x292200: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x292200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292204:
    // 0x292204: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
label_292208:
    if (ctx->pc == 0x292208u) {
        ctx->pc = 0x292208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292204u;
        // 0x292208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29220Cu;
        goto label_29220c;
    }
    ctx->pc = 0x292204u;
    {
        const bool branch_taken_0x292204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x292204) {
            ctx->pc = 0x292208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292204u;
            // 0x292208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x29220Cu;
label_29220c:
    // 0x29220c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29220cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_292210:
    // 0x292210: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x292210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_292214:
    // 0x292214: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x292214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_292218:
    // 0x292218: 0x40f809  jalr        $v0
label_29221c:
    if (ctx->pc == 0x29221Cu) {
        ctx->pc = 0x29221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292218u;
        // 0x29221c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292220u;
        goto label_292220;
    }
    ctx->pc = 0x292218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x292220u);
        ctx->pc = 0x29221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292218u;
        // 0x29221c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292218u, 0x292220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292220u;
label_292220:
    // 0x292220: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x292220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_292224:
    // 0x292224: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_292228:
    if (ctx->pc == 0x292228u) {
        ctx->pc = 0x292228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292224u;
        // 0x292228: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29222Cu;
        goto label_29222c;
    }
    ctx->pc = 0x292224u;
    {
        const bool branch_taken_0x292224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x292224) {
            ctx->pc = 0x292228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292224u;
            // 0x292228: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x29222Cu;
label_29222c:
    // 0x29222c: 0xc0a36c8  jal         func_28DB20
label_292230:
    if (ctx->pc == 0x292230u) {
        ctx->pc = 0x292230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29222Cu;
        // 0x292230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292234u;
        goto label_292234;
    }
    ctx->pc = 0x29222Cu;
    SET_GPR_U32(ctx, 31, 0x292234u);
    ctx->pc = 0x292230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29222Cu;
    // 0x292230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x29222Cu, 0x292234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292234u;
label_292234:
    // 0x292234: 0x8223002e  lb          $v1, 0x2E($s1)
    ctx->pc = 0x292234u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_292238:
    // 0x292238: 0x5c600014  bgtzl       $v1, . + 4 + (0x14 << 2)
label_29223c:
    if (ctx->pc == 0x29223Cu) {
        ctx->pc = 0x29223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292238u;
        // 0x29223c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292240u;
        goto label_292240;
    }
    ctx->pc = 0x292238u;
    {
        const bool branch_taken_0x292238 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x292238) {
            ctx->pc = 0x29223Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292238u;
            // 0x29223c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x292240u;
label_292240:
    // 0x292240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292244:
    // 0x292244: 0xc0a7c26  jal         func_29F098
label_292248:
    if (ctx->pc == 0x292248u) {
        ctx->pc = 0x292248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292244u;
        // 0x292248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29224Cu;
        goto label_29224c;
    }
    ctx->pc = 0x292244u;
    SET_GPR_U32(ctx, 31, 0x29224Cu);
    ctx->pc = 0x292248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292244u;
    // 0x292248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F098u, 0x292244u, 0x29224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29224Cu;
label_29224c:
    // 0x29224c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29224cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292250:
    // 0x292250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_292254:
    // 0x292254: 0x5602000d  bnel        $s0, $v0, . + 4 + (0xD << 2)
label_292258:
    if (ctx->pc == 0x292258u) {
        ctx->pc = 0x292258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292254u;
        // 0x292258: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29225Cu;
        goto label_29225c;
    }
    ctx->pc = 0x292254u;
    {
        const bool branch_taken_0x292254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x292254) {
            ctx->pc = 0x292258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292254u;
            // 0x292258: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29228Cu;
            goto label_29228c;
        }
    }
    ctx->pc = 0x29225Cu;
label_29225c:
    // 0x29225c: 0xc088ef0  jal         func_223BC0
label_292260:
    if (ctx->pc == 0x292260u) {
        ctx->pc = 0x292260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29225Cu;
        // 0x292260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292264u;
        goto label_292264;
    }
    ctx->pc = 0x29225Cu;
    SET_GPR_U32(ctx, 31, 0x292264u);
    ctx->pc = 0x292260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29225Cu;
    // 0x292260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x29225Cu, 0x292264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292264u;
label_292264:
    // 0x292264: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_292268:
    if (ctx->pc == 0x292268u) {
        ctx->pc = 0x29226Cu;
        goto label_29226c;
    }
    ctx->pc = 0x292264u;
    {
        const bool branch_taken_0x292264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x292264) {
            ctx->pc = 0x292274u;
            goto label_292274;
        }
    }
    ctx->pc = 0x29226Cu;
label_29226c:
    // 0x29226c: 0xc08be36  jal         func_22F8D8
label_292270:
    if (ctx->pc == 0x292270u) {
        ctx->pc = 0x292270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29226Cu;
        // 0x292270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292274u;
        goto label_292274;
    }
    ctx->pc = 0x29226Cu;
    SET_GPR_U32(ctx, 31, 0x292274u);
    ctx->pc = 0x292270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29226Cu;
    // 0x292270: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x29226Cu, 0x292274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292274u;
label_292274:
    // 0x292274: 0xc0874fa  jal         func_21D3E8
label_292278:
    if (ctx->pc == 0x292278u) {
        ctx->pc = 0x292278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292274u;
        // 0x292278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29227Cu;
        goto label_29227c;
    }
    ctx->pc = 0x292274u;
    SET_GPR_U32(ctx, 31, 0x29227Cu);
    ctx->pc = 0x292278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292274u;
    // 0x292278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x292274u, 0x29227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29227Cu;
label_29227c:
    // 0x29227c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29227cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_292280:
    // 0x292280: 0xc051fbc  jal         func_147EF0
label_292284:
    if (ctx->pc == 0x292284u) {
        ctx->pc = 0x292284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292280u;
        // 0x292284: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292288u;
        goto label_292288;
    }
    ctx->pc = 0x292280u;
    SET_GPR_U32(ctx, 31, 0x292288u);
    ctx->pc = 0x292284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292280u;
    // 0x292284: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x292280u, 0x292288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292288u;
label_292288:
    // 0x292288: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x292288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29228c:
    // 0x29228c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29228cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_292290:
    // 0x292290: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x292290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_292294:
    // 0x292294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_292298:
    // 0x292298: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x292298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29229c:
    // 0x29229c: 0x3e00008  jr          $ra
label_2922a0:
    if (ctx->pc == 0x2922A0u) {
        ctx->pc = 0x2922A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29229Cu;
        // 0x2922a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2922A4u;
        goto label_2922a4;
    }
    ctx->pc = 0x29229Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2922A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29229Cu;
        // 0x2922a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29229Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2922A4u;
label_2922a4:
    // 0x2922a4: 0x0  nop
    ctx->pc = 0x2922a4u;
    // NOP
    ctx->pc = 0x2922a8u;
}
