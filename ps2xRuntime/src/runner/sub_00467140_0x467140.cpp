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

// Function: sub_00467140
// Address: 0x467140 - 0x4673d0
void sub_00467140_0x467140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467140_0x467140");
#endif

    switch (ctx->pc) {
        case 0x46716cu: goto label_46716c;
        case 0x4671b0u: goto label_4671b0;
        case 0x4672b0u: goto label_4672b0;
        default: break;
    }

    ctx->pc = 0x467140u;

    // 0x467140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x467144: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x467144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x467148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x467148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46714c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46714cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x467150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467154: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x467154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x467158: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x467158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x46715c: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x46715Cu;
    {
        const bool branch_taken_0x46715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46715Cu;
        // 0x467160: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46715c) {
            ctx->pc = 0x4673C0u;
            goto label_4673c0;
        }
    }
    ctx->pc = 0x467164u;
    // 0x467164: 0xc119b0e  jal         func_466C38
    ctx->pc = 0x467164u;
    SET_GPR_U32(ctx, 31, 0x46716Cu);
    ctx->pc = 0x466C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466C38u, 0x467164u, 0x46716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46716Cu;
label_46716c:
    // 0x46716c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x46716cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x467170: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x467170u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x467174: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x467174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x467178: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x467178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x46717c: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x46717cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x467180: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x467180u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x467184: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x467184u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x467188: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x467188u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x46718c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x46718Cu;
    {
        const bool branch_taken_0x46718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x467190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46718Cu;
        // 0x467190: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46718c) {
            ctx->pc = 0x467294u;
            goto label_467294;
        }
    }
    ctx->pc = 0x467194u;
    // 0x467194: 0x11800089  beqz        $t4, . + 4 + (0x89 << 2)
    ctx->pc = 0x467194u;
    {
        const bool branch_taken_0x467194 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x467198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467194u;
        // 0x467198: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467194) {
            ctx->pc = 0x4673BCu;
            goto label_4673bc;
        }
    }
    ctx->pc = 0x46719Cu;
    // 0x46719c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x46719cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4671a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4671a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4671a4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4671a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4671a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4671a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4671ac: 0x34e7fc00  ori         $a3, $a3, 0xFC00
    ctx->pc = 0x4671acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64512);
label_4671b0:
    // 0x4671b0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4671b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4671b4: 0x2505001c  addiu       $a1, $t0, 0x1C
    ctx->pc = 0x4671b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x4671b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4671b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4671bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4671bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4671c0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4671c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4671c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4671c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4671c8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4671c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4671cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4671ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4671d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4671d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4671d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4671d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4671d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4671d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4671dc: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x4671dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x4671e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4671E0u;
    {
        const bool branch_taken_0x4671e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4671E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4671E0u;
        // 0x4671e4: 0x671824  and         $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4671e0) {
            ctx->pc = 0x4671F0u;
            goto label_4671f0;
        }
    }
    ctx->pc = 0x4671E8u;
    // 0x4671e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4671E8u;
    {
        const bool branch_taken_0x4671e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4671ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4671E8u;
        // 0x4671ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4671e8) {
            ctx->pc = 0x467200u;
            goto label_467200;
        }
    }
    ctx->pc = 0x4671F0u;
label_4671f0:
    // 0x4671f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4671f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4671f4: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x4671f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x4671f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4671f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4671fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4671fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_467200:
    // 0x467200: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x467200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x467204: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x467204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x467208: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x467208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x46720c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x46720cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x467210: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x467210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x467214: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x467214u;
    {
        const bool branch_taken_0x467214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x467218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467214u;
        // 0x467218: 0x671824  and         $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467214) {
            ctx->pc = 0x467224u;
            goto label_467224;
        }
    }
    ctx->pc = 0x46721Cu;
    // 0x46721c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x46721Cu;
    {
        const bool branch_taken_0x46721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46721Cu;
        // 0x467220: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46721c) {
            ctx->pc = 0x467234u;
            goto label_467234;
        }
    }
    ctx->pc = 0x467224u;
label_467224:
    // 0x467224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x467224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x467228: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x467228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x46722c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46722cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x467230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x467230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_467234:
    // 0x467234: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x467234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x467238: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x467238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x46723c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x46723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x467240: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x467240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x467244: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x467244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x467248: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x467248u;
    {
        const bool branch_taken_0x467248 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x46724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467248u;
        // 0x46724c: 0x671824  and         $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467248) {
            ctx->pc = 0x467258u;
            goto label_467258;
        }
    }
    ctx->pc = 0x467250u;
    // 0x467250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x467250u;
    {
        const bool branch_taken_0x467250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467250u;
        // 0x467254: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467250) {
            ctx->pc = 0x467268u;
            goto label_467268;
        }
    }
    ctx->pc = 0x467258u;
label_467258:
    // 0x467258: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x467258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46725c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x46725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x467260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x467260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x467264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x467264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_467268:
    // 0x467268: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x467268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x46726c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x46726cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x467270: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x467270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x467274: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x467274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x467278: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x467278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46727c: 0x16c182b  sltu        $v1, $t3, $t4
    ctx->pc = 0x46727cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x467280: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x467280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x467284: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x467284u;
    {
        const bool branch_taken_0x467284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x467288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467284u;
        // 0x467288: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467284) {
            ctx->pc = 0x4671B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4671b0;
        }
    }
    ctx->pc = 0x46728Cu;
    // 0x46728c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x46728Cu;
    {
        const bool branch_taken_0x46728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46728Cu;
        // 0x467290: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46728c) {
            ctx->pc = 0x4673C0u;
            goto label_4673c0;
        }
    }
    ctx->pc = 0x467294u;
label_467294:
    // 0x467294: 0x11800049  beqz        $t4, . + 4 + (0x49 << 2)
    ctx->pc = 0x467294u;
    {
        const bool branch_taken_0x467294 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x467298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467294u;
        // 0x467298: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467294) {
            ctx->pc = 0x4673BCu;
            goto label_4673bc;
        }
    }
    ctx->pc = 0x46729Cu;
    // 0x46729c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x46729cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4672a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4672a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4672a4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4672a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4672a8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4672a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4672ac: 0x354afc00  ori         $t2, $t2, 0xFC00
    ctx->pc = 0x4672acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)64512);
label_4672b0:
    // 0x4672b0: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x4672b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4672b4: 0x2507001c  addiu       $a3, $t0, 0x1C
    ctx->pc = 0x4672b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x4672b8: 0x8d020038  lw          $v0, 0x38($t0)
    ctx->pc = 0x4672b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x4672bc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4672bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4672c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4672c4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4672c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4672c8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x4672c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4672cc: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x4672ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x4672d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4672d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4672d4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4672d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4672d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4672d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4672dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4672dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4672e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4672e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4672e4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x4672e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4672e8: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x4672e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x4672ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4672ECu;
    {
        const bool branch_taken_0x4672ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4672F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4672ECu;
        // 0x4672f0: 0x8a2024  and         $a0, $a0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4672ec) {
            ctx->pc = 0x4672FCu;
            goto label_4672fc;
        }
    }
    ctx->pc = 0x4672F4u;
    // 0x4672f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4672F4u;
    {
        const bool branch_taken_0x4672f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4672F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4672F4u;
        // 0x4672f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4672f4) {
            ctx->pc = 0x467318u;
            goto label_467318;
        }
    }
    ctx->pc = 0x4672FCu;
label_4672fc:
    // 0x4672fc: 0x8d030038  lw          $v1, 0x38($t0)
    ctx->pc = 0x4672fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x467300: 0x25070020  addiu       $a3, $t0, 0x20
    ctx->pc = 0x467300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x467304: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x467304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x467308: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x467308u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46730c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x46730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x467310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x467310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x467314: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x467314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_467318:
    // 0x467318: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x467318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46731c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x46731cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x467320: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x467320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x467324: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x467324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x467328: 0x91250002  lbu         $a1, 0x2($t1)
    ctx->pc = 0x467328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x46732c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x46732Cu;
    {
        const bool branch_taken_0x46732c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x467330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46732Cu;
        // 0x467330: 0x8a2024  and         $a0, $a0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46732c) {
            ctx->pc = 0x46733Cu;
            goto label_46733c;
        }
    }
    ctx->pc = 0x467334u;
    // 0x467334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x467334u;
    {
        const bool branch_taken_0x467334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467334u;
        // 0x467338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467334) {
            ctx->pc = 0x467358u;
            goto label_467358;
        }
    }
    ctx->pc = 0x46733Cu;
label_46733c:
    // 0x46733c: 0x8d030038  lw          $v1, 0x38($t0)
    ctx->pc = 0x46733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x467340: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x467340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x467344: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x467344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x467348: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x467348u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46734c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x46734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x467350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x467350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x467354: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x467354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_467358:
    // 0x467358: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x467358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46735c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x46735cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x467360: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x467360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x467364: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x467364u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x467368: 0x91250003  lbu         $a1, 0x3($t1)
    ctx->pc = 0x467368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x46736c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x46736Cu;
    {
        const bool branch_taken_0x46736c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x467370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46736Cu;
        // 0x467370: 0x8a2024  and         $a0, $a0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46736c) {
            ctx->pc = 0x46737Cu;
            goto label_46737c;
        }
    }
    ctx->pc = 0x467374u;
    // 0x467374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x467374u;
    {
        const bool branch_taken_0x467374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x467378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x467374u;
        // 0x467378: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x467374) {
            ctx->pc = 0x467398u;
            goto label_467398;
        }
    }
    ctx->pc = 0x46737Cu;
label_46737c:
    // 0x46737c: 0x8d030038  lw          $v1, 0x38($t0)
    ctx->pc = 0x46737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x467380: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x467380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x467384: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x467384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x467388: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x467388u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46738c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x46738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x467390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x467390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x467394: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x467394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_467398:
    // 0x467398: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x467398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x46739c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x46739cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4673a0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4673a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4673a4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4673a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4673a8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4673ac: 0x16c182b  sltu        $v1, $t3, $t4
    ctx->pc = 0x4673acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x4673b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4673b4: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x4673B4u;
    {
        const bool branch_taken_0x4673b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4673B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4673B4u;
        // 0x4673b8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4673b4) {
            ctx->pc = 0x4672B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4672b0;
        }
    }
    ctx->pc = 0x4673BCu;
label_4673bc:
    // 0x4673bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4673bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4673c0:
    // 0x4673c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4673c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4673c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4673c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4673c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4673C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4673CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4673C8u;
        // 0x4673cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4673C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4673D0u;
}
