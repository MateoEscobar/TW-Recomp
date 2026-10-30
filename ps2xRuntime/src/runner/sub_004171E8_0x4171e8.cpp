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

// Function: sub_004171E8
// Address: 0x4171e8 - 0x4172c8
void sub_004171E8_0x4171e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004171E8_0x4171e8");
#endif

    switch (ctx->pc) {
        case 0x4171e8u: goto label_4171e8;
        case 0x4171ecu: goto label_4171ec;
        case 0x4171f0u: goto label_4171f0;
        case 0x4171f4u: goto label_4171f4;
        case 0x4171f8u: goto label_4171f8;
        case 0x4171fcu: goto label_4171fc;
        case 0x417200u: goto label_417200;
        case 0x417204u: goto label_417204;
        case 0x417208u: goto label_417208;
        case 0x41720cu: goto label_41720c;
        case 0x417210u: goto label_417210;
        case 0x417214u: goto label_417214;
        case 0x417218u: goto label_417218;
        case 0x41721cu: goto label_41721c;
        case 0x417220u: goto label_417220;
        case 0x417224u: goto label_417224;
        case 0x417228u: goto label_417228;
        case 0x41722cu: goto label_41722c;
        case 0x417230u: goto label_417230;
        case 0x417234u: goto label_417234;
        case 0x417238u: goto label_417238;
        case 0x41723cu: goto label_41723c;
        case 0x417240u: goto label_417240;
        case 0x417244u: goto label_417244;
        case 0x417248u: goto label_417248;
        case 0x41724cu: goto label_41724c;
        case 0x417250u: goto label_417250;
        case 0x417254u: goto label_417254;
        case 0x417258u: goto label_417258;
        case 0x41725cu: goto label_41725c;
        case 0x417260u: goto label_417260;
        case 0x417264u: goto label_417264;
        case 0x417268u: goto label_417268;
        case 0x41726cu: goto label_41726c;
        case 0x417270u: goto label_417270;
        case 0x417274u: goto label_417274;
        case 0x417278u: goto label_417278;
        case 0x41727cu: goto label_41727c;
        case 0x417280u: goto label_417280;
        case 0x417284u: goto label_417284;
        case 0x417288u: goto label_417288;
        case 0x41728cu: goto label_41728c;
        case 0x417290u: goto label_417290;
        case 0x417294u: goto label_417294;
        case 0x417298u: goto label_417298;
        case 0x41729cu: goto label_41729c;
        case 0x4172a0u: goto label_4172a0;
        case 0x4172a4u: goto label_4172a4;
        case 0x4172a8u: goto label_4172a8;
        case 0x4172acu: goto label_4172ac;
        case 0x4172b0u: goto label_4172b0;
        case 0x4172b4u: goto label_4172b4;
        case 0x4172b8u: goto label_4172b8;
        case 0x4172bcu: goto label_4172bc;
        case 0x4172c0u: goto label_4172c0;
        case 0x4172c4u: goto label_4172c4;
        default: break;
    }

    ctx->pc = 0x4171e8u;

label_4171e8:
    // 0x4171e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4171e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4171ec:
    // 0x4171ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4171ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4171f0:
    // 0x4171f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4171f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4171f4:
    // 0x4171f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4171f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4171f8:
    // 0x4171f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4171f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4171fc:
    // 0x4171fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4171fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417200:
    // 0x417200: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x417200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_417204:
    // 0x417204: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x417204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417208:
    // 0x417208: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x417208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_41720c:
    // 0x41720c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x41720cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_417210:
    // 0x417210: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x417210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_417214:
    // 0x417214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x417214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_417218:
    // 0x417218: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x417218u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_41721c:
    // 0x41721c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_417220:
    // 0x417220: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x417220u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_417224:
    // 0x417224: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x417224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_417228:
    // 0x417228: 0x60f809  jalr        $v1
label_41722c:
    if (ctx->pc == 0x41722Cu) {
        ctx->pc = 0x41722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417228u;
        // 0x41722c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417230u;
        goto label_417230;
    }
    ctx->pc = 0x417228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x417230u);
        ctx->pc = 0x41722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417228u;
        // 0x41722c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417228u, 0x417230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417230u;
label_417230:
    // 0x417230: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x417230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417234:
    // 0x417234: 0x10000016  b           . + 4 + (0x16 << 2)
label_417238:
    if (ctx->pc == 0x417238u) {
        ctx->pc = 0x417238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417234u;
        // 0x417238: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41723Cu;
        goto label_41723c;
    }
    ctx->pc = 0x417234u;
    {
        const bool branch_taken_0x417234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417234u;
        // 0x417238: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417234) {
            ctx->pc = 0x417290u;
            goto label_417290;
        }
    }
    ctx->pc = 0x41723Cu;
label_41723c:
    // 0x41723c: 0x0  nop
    ctx->pc = 0x41723cu;
    // NOP
label_417240:
    // 0x417240: 0xc105774  jal         func_415DD0
label_417244:
    if (ctx->pc == 0x417244u) {
        ctx->pc = 0x417244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417240u;
        // 0x417244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417248u;
        goto label_417248;
    }
    ctx->pc = 0x417240u;
    SET_GPR_U32(ctx, 31, 0x417248u);
    ctx->pc = 0x417244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417240u;
    // 0x417244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x417240u, 0x417248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417248u;
label_417248:
    // 0x417248: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41724c:
    // 0x41724c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x41724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_417250:
    // 0x417250: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_417254:
    if (ctx->pc == 0x417254u) {
        ctx->pc = 0x417254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417250u;
        // 0x417254: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417258u;
        goto label_417258;
    }
    ctx->pc = 0x417250u;
    {
        const bool branch_taken_0x417250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417250) {
            ctx->pc = 0x417254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417250u;
            // 0x417254: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417290u;
            goto label_417290;
        }
    }
    ctx->pc = 0x417258u;
label_417258:
    // 0x417258: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x417258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
label_41725c:
    // 0x41725c: 0x5453000c  bnel        $v0, $s3, . + 4 + (0xC << 2)
label_417260:
    if (ctx->pc == 0x417260u) {
        ctx->pc = 0x417260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41725Cu;
        // 0x417260: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417264u;
        goto label_417264;
    }
    ctx->pc = 0x41725Cu;
    {
        const bool branch_taken_0x41725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x41725c) {
            ctx->pc = 0x417260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41725Cu;
            // 0x417260: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417290u;
            goto label_417290;
        }
    }
    ctx->pc = 0x417264u;
label_417264:
    // 0x417264: 0xc10587a  jal         func_4161E8
label_417268:
    if (ctx->pc == 0x417268u) {
        ctx->pc = 0x417268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417264u;
        // 0x417268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41726Cu;
        goto label_41726c;
    }
    ctx->pc = 0x417264u;
    SET_GPR_U32(ctx, 31, 0x41726Cu);
    ctx->pc = 0x417268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417264u;
    // 0x417268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x417264u, 0x41726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41726Cu;
label_41726c:
    // 0x41726c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41726cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417270:
    // 0x417270: 0xc0cdb26  jal         func_336C98
label_417274:
    if (ctx->pc == 0x417274u) {
        ctx->pc = 0x417274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417270u;
        // 0x417274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417278u;
        goto label_417278;
    }
    ctx->pc = 0x417270u;
    SET_GPR_U32(ctx, 31, 0x417278u);
    ctx->pc = 0x417274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417270u;
    // 0x417274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x417270u, 0x417278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417278u;
label_417278:
    // 0x417278: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x417278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41727c:
    // 0x41727c: 0x0  nop
    ctx->pc = 0x41727cu;
    // NOP
label_417280:
    // 0x417280: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_417284:
    if (ctx->pc == 0x417284u) {
        ctx->pc = 0x417284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417280u;
        // 0x417284: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417288u;
        goto label_417288;
    }
    ctx->pc = 0x417280u;
    {
        const bool branch_taken_0x417280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x417284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417280u;
        // 0x417284: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417280) {
            ctx->pc = 0x417290u;
            goto label_417290;
        }
    }
    ctx->pc = 0x417288u;
label_417288:
    // 0x417288: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x417288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41728c:
    // 0x41728c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x41728cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_417290:
    // 0x417290: 0xc10574c  jal         func_415D30
label_417294:
    if (ctx->pc == 0x417294u) {
        ctx->pc = 0x417298u;
        goto label_417298;
    }
    ctx->pc = 0x417290u;
    SET_GPR_U32(ctx, 31, 0x417298u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x417290u, 0x417298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417298u;
label_417298:
    // 0x417298: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x417298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41729c:
    // 0x41729c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_4172a0:
    if (ctx->pc == 0x4172A0u) {
        ctx->pc = 0x4172A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41729Cu;
        // 0x4172a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4172A4u;
        goto label_4172a4;
    }
    ctx->pc = 0x41729Cu;
    {
        const bool branch_taken_0x41729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4172A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41729Cu;
        // 0x4172a0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41729c) {
            ctx->pc = 0x417240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417240;
        }
    }
    ctx->pc = 0x4172A4u;
label_4172a4:
    // 0x4172a4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4172a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4172a8:
    // 0x4172a8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4172a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4172ac:
    // 0x4172ac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4172acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4172b0:
    // 0x4172b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4172b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4172b4:
    // 0x4172b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4172b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4172b8:
    // 0x4172b8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x4172b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4172bc:
    // 0x4172bc: 0x3e00008  jr          $ra
label_4172c0:
    if (ctx->pc == 0x4172C0u) {
        ctx->pc = 0x4172C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4172BCu;
        // 0x4172c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4172C4u;
        goto label_4172c4;
    }
    ctx->pc = 0x4172BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4172C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4172BCu;
        // 0x4172c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4172BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4172C4u;
label_4172c4:
    // 0x4172c4: 0x0  nop
    ctx->pc = 0x4172c4u;
    // NOP
    ctx->pc = 0x4172c8u;
}
