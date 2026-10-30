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

// Function: sub_002971C8
// Address: 0x2971c8 - 0x297308
void sub_002971C8_0x2971c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002971C8_0x2971c8");
#endif

    switch (ctx->pc) {
        case 0x2971c8u: goto label_2971c8;
        case 0x2971ccu: goto label_2971cc;
        case 0x2971d0u: goto label_2971d0;
        case 0x2971d4u: goto label_2971d4;
        case 0x2971d8u: goto label_2971d8;
        case 0x2971dcu: goto label_2971dc;
        case 0x2971e0u: goto label_2971e0;
        case 0x2971e4u: goto label_2971e4;
        case 0x2971e8u: goto label_2971e8;
        case 0x2971ecu: goto label_2971ec;
        case 0x2971f0u: goto label_2971f0;
        case 0x2971f4u: goto label_2971f4;
        case 0x2971f8u: goto label_2971f8;
        case 0x2971fcu: goto label_2971fc;
        case 0x297200u: goto label_297200;
        case 0x297204u: goto label_297204;
        case 0x297208u: goto label_297208;
        case 0x29720cu: goto label_29720c;
        case 0x297210u: goto label_297210;
        case 0x297214u: goto label_297214;
        case 0x297218u: goto label_297218;
        case 0x29721cu: goto label_29721c;
        case 0x297220u: goto label_297220;
        case 0x297224u: goto label_297224;
        case 0x297228u: goto label_297228;
        case 0x29722cu: goto label_29722c;
        case 0x297230u: goto label_297230;
        case 0x297234u: goto label_297234;
        case 0x297238u: goto label_297238;
        case 0x29723cu: goto label_29723c;
        case 0x297240u: goto label_297240;
        case 0x297244u: goto label_297244;
        case 0x297248u: goto label_297248;
        case 0x29724cu: goto label_29724c;
        case 0x297250u: goto label_297250;
        case 0x297254u: goto label_297254;
        case 0x297258u: goto label_297258;
        case 0x29725cu: goto label_29725c;
        case 0x297260u: goto label_297260;
        case 0x297264u: goto label_297264;
        case 0x297268u: goto label_297268;
        case 0x29726cu: goto label_29726c;
        case 0x297270u: goto label_297270;
        case 0x297274u: goto label_297274;
        case 0x297278u: goto label_297278;
        case 0x29727cu: goto label_29727c;
        case 0x297280u: goto label_297280;
        case 0x297284u: goto label_297284;
        case 0x297288u: goto label_297288;
        case 0x29728cu: goto label_29728c;
        case 0x297290u: goto label_297290;
        case 0x297294u: goto label_297294;
        case 0x297298u: goto label_297298;
        case 0x29729cu: goto label_29729c;
        case 0x2972a0u: goto label_2972a0;
        case 0x2972a4u: goto label_2972a4;
        case 0x2972a8u: goto label_2972a8;
        case 0x2972acu: goto label_2972ac;
        case 0x2972b0u: goto label_2972b0;
        case 0x2972b4u: goto label_2972b4;
        case 0x2972b8u: goto label_2972b8;
        case 0x2972bcu: goto label_2972bc;
        case 0x2972c0u: goto label_2972c0;
        case 0x2972c4u: goto label_2972c4;
        case 0x2972c8u: goto label_2972c8;
        case 0x2972ccu: goto label_2972cc;
        case 0x2972d0u: goto label_2972d0;
        case 0x2972d4u: goto label_2972d4;
        case 0x2972d8u: goto label_2972d8;
        case 0x2972dcu: goto label_2972dc;
        case 0x2972e0u: goto label_2972e0;
        case 0x2972e4u: goto label_2972e4;
        case 0x2972e8u: goto label_2972e8;
        case 0x2972ecu: goto label_2972ec;
        case 0x2972f0u: goto label_2972f0;
        case 0x2972f4u: goto label_2972f4;
        case 0x2972f8u: goto label_2972f8;
        case 0x2972fcu: goto label_2972fc;
        case 0x297300u: goto label_297300;
        case 0x297304u: goto label_297304;
        default: break;
    }

    ctx->pc = 0x2971c8u;

label_2971c8:
    // 0x2971c8: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2971c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_2971cc:
    // 0x2971cc: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x2971ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
label_2971d0:
    // 0x2971d0: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x2971d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
label_2971d4:
    // 0x2971d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2971d8:
    // 0x2971d8: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x2971d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
label_2971dc:
    // 0x2971dc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2971dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2971e0:
    // 0x2971e0: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x2971e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
label_2971e4:
    // 0x2971e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2971e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2971e8:
    // 0x2971e8: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x2971e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
label_2971ec:
    // 0x2971ec: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x2971ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
label_2971f0:
    // 0x2971f0: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x2971f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
label_2971f4:
    // 0x2971f4: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x2971f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
label_2971f8:
    // 0x2971f8: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x2971f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
label_2971fc:
    // 0x2971fc: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x2971fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_297200:
    // 0x297200: 0xc0a5a72  jal         func_2969C8
label_297204:
    if (ctx->pc == 0x297204u) {
        ctx->pc = 0x297204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297200u;
        // 0x297204: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297208u;
        goto label_297208;
    }
    ctx->pc = 0x297200u;
    SET_GPR_U32(ctx, 31, 0x297208u);
    ctx->pc = 0x297204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297200u;
    // 0x297204: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297200u, 0x297208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297208u;
label_297208:
    // 0x297208: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x297208u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29720c:
    // 0x29720c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_297210:
    // 0x297210: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_297214:
    // 0x297214: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x297214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_297218:
    // 0x297218: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29721c:
    // 0x29721c: 0x86c30092  lh          $v1, 0x92($s6)
    ctx->pc = 0x29721cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
label_297220:
    // 0x297220: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x297220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_297224:
    // 0x297224: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x297224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_297228:
    // 0x297228: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x297228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29722c:
    // 0x29722c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29722cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_297230:
    // 0x297230: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x297230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_297234:
    // 0x297234: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_297238:
    // 0x297238: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x297238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29723c:
    // 0x29723c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x29723cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_297240:
    // 0x297240: 0xc089d2a  jal         func_2274A8
label_297244:
    if (ctx->pc == 0x297244u) {
        ctx->pc = 0x297244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297240u;
        // 0x297244: 0x7fa201e0  sq          $v0, 0x1E0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297248u;
        goto label_297248;
    }
    ctx->pc = 0x297240u;
    SET_GPR_U32(ctx, 31, 0x297248u);
    ctx->pc = 0x297244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297240u;
    // 0x297244: 0x7fa201e0  sq          $v0, 0x1E0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x297240u, 0x297248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297248u;
label_297248:
    // 0x297248: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x297248u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29724c:
    // 0x29724c: 0x12a00021  beqz        $s5, . + 4 + (0x21 << 2)
label_297250:
    if (ctx->pc == 0x297250u) {
        ctx->pc = 0x297250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29724Cu;
        // 0x297250: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297254u;
        goto label_297254;
    }
    ctx->pc = 0x29724Cu;
    {
        const bool branch_taken_0x29724c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x297250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29724Cu;
        // 0x297250: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29724c) {
            ctx->pc = 0x2972D4u;
            goto label_2972d4;
        }
    }
    ctx->pc = 0x297254u;
label_297254:
    // 0x297254: 0x0  nop
    ctx->pc = 0x297254u;
    // NOP
label_297258:
    // 0x297258: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x297258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29725c:
    // 0x29725c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29725cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_297260:
    // 0x297260: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x297260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_297264:
    // 0x297264: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x297264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_297268:
    // 0x297268: 0x0  nop
    ctx->pc = 0x297268u;
    // NOP
label_29726c:
    // 0x29726c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x29726cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_297270:
    // 0x297270: 0xc0a5c14  jal         func_297050
label_297274:
    if (ctx->pc == 0x297274u) {
        ctx->pc = 0x297274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297270u;
        // 0x297274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297278u;
        goto label_297278;
    }
    ctx->pc = 0x297270u;
    SET_GPR_U32(ctx, 31, 0x297278u);
    ctx->pc = 0x297274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297270u;
    // 0x297274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297050u, 0x297270u, 0x297278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297278u;
label_297278:
    // 0x297278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x297278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29727c:
    // 0x29727c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29727cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_297280:
    // 0x297280: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x297280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_297284:
    // 0x297284: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x297284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_297288:
    // 0x297288: 0x40f809  jalr        $v0
label_29728c:
    if (ctx->pc == 0x29728Cu) {
        ctx->pc = 0x29728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297288u;
        // 0x29728c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297290u;
        goto label_297290;
    }
    ctx->pc = 0x297288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x297290u);
        ctx->pc = 0x29728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297288u;
        // 0x29728c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297288u, 0x297290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297290u;
label_297290:
    // 0x297290: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x297290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_297294:
    // 0x297294: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x297294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_297298:
    // 0x297298: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_29729c:
    if (ctx->pc == 0x29729Cu) {
        ctx->pc = 0x29729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297298u;
        // 0x29729c: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972A0u;
        goto label_2972a0;
    }
    ctx->pc = 0x297298u;
    {
        const bool branch_taken_0x297298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297298u;
        // 0x29729c: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297298) {
            ctx->pc = 0x2972C4u;
            goto label_2972c4;
        }
    }
    ctx->pc = 0x2972A0u;
label_2972a0:
    // 0x2972a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2972a4:
    // 0x2972a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2972a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2972a8:
    // 0x2972a8: 0xc08886c  jal         func_2221B0
label_2972ac:
    if (ctx->pc == 0x2972ACu) {
        ctx->pc = 0x2972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972A8u;
        // 0x2972ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972B0u;
        goto label_2972b0;
    }
    ctx->pc = 0x2972A8u;
    SET_GPR_U32(ctx, 31, 0x2972B0u);
    ctx->pc = 0x2972ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2972A8u;
    // 0x2972ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2972A8u, 0x2972B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2972B0u;
label_2972b0:
    // 0x2972b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2972b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2972b4:
    // 0x2972b4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2972b8:
    if (ctx->pc == 0x2972B8u) {
        ctx->pc = 0x2972B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972B4u;
        // 0x2972b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972BCu;
        goto label_2972bc;
    }
    ctx->pc = 0x2972B4u;
    {
        const bool branch_taken_0x2972b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2972b4) {
            ctx->pc = 0x2972B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2972B4u;
            // 0x2972b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2972C8u;
            goto label_2972c8;
        }
    }
    ctx->pc = 0x2972BCu;
label_2972bc:
    // 0x2972bc: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x2972bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_2972c0:
    // 0x2972c0: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x2972c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_2972c4:
    // 0x2972c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2972c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2972c8:
    // 0x2972c8: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2972cc:
    // 0x2972cc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_2972d0:
    if (ctx->pc == 0x2972D0u) {
        ctx->pc = 0x2972D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972CCu;
        // 0x2972d0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2972D4u;
        goto label_2972d4;
    }
    ctx->pc = 0x2972CCu;
    {
        const bool branch_taken_0x2972cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2972D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972CCu;
        // 0x2972d0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972cc) {
            ctx->pc = 0x297258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297258;
        }
    }
    ctx->pc = 0x2972D4u;
label_2972d4:
    // 0x2972d4: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x2972d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2972d8:
    // 0x2972d8: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x2972d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_2972dc:
    // 0x2972dc: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x2972dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_2972e0:
    // 0x2972e0: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x2972e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_2972e4:
    // 0x2972e4: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x2972e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_2972e8:
    // 0x2972e8: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x2972e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_2972ec:
    // 0x2972ec: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x2972ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_2972f0:
    // 0x2972f0: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x2972f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_2972f4:
    // 0x2972f4: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x2972f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2972f8:
    // 0x2972f8: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x2972f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_2972fc:
    // 0x2972fc: 0x3e00008  jr          $ra
label_297300:
    if (ctx->pc == 0x297300u) {
        ctx->pc = 0x297300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972FCu;
        // 0x297300: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x297304u;
        goto label_297304;
    }
    ctx->pc = 0x2972FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972FCu;
        // 0x297300: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2972FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297304u;
label_297304:
    // 0x297304: 0x0  nop
    ctx->pc = 0x297304u;
    // NOP
    ctx->pc = 0x297308u;
}
