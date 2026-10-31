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

// Function: sub_0025A178
// Address: 0x25a178 - 0x25a310
void sub_0025A178_0x25a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A178_0x25a178");
#endif

    switch (ctx->pc) {
        case 0x25a178u: goto label_25a178;
        case 0x25a17cu: goto label_25a17c;
        case 0x25a180u: goto label_25a180;
        case 0x25a184u: goto label_25a184;
        case 0x25a188u: goto label_25a188;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a190u: goto label_25a190;
        case 0x25a194u: goto label_25a194;
        case 0x25a198u: goto label_25a198;
        case 0x25a19cu: goto label_25a19c;
        case 0x25a1a0u: goto label_25a1a0;
        case 0x25a1a4u: goto label_25a1a4;
        case 0x25a1a8u: goto label_25a1a8;
        case 0x25a1acu: goto label_25a1ac;
        case 0x25a1b0u: goto label_25a1b0;
        case 0x25a1b4u: goto label_25a1b4;
        case 0x25a1b8u: goto label_25a1b8;
        case 0x25a1bcu: goto label_25a1bc;
        case 0x25a1c0u: goto label_25a1c0;
        case 0x25a1c4u: goto label_25a1c4;
        case 0x25a1c8u: goto label_25a1c8;
        case 0x25a1ccu: goto label_25a1cc;
        case 0x25a1d0u: goto label_25a1d0;
        case 0x25a1d4u: goto label_25a1d4;
        case 0x25a1d8u: goto label_25a1d8;
        case 0x25a1dcu: goto label_25a1dc;
        case 0x25a1e0u: goto label_25a1e0;
        case 0x25a1e4u: goto label_25a1e4;
        case 0x25a1e8u: goto label_25a1e8;
        case 0x25a1ecu: goto label_25a1ec;
        case 0x25a1f0u: goto label_25a1f0;
        case 0x25a1f4u: goto label_25a1f4;
        case 0x25a1f8u: goto label_25a1f8;
        case 0x25a1fcu: goto label_25a1fc;
        case 0x25a200u: goto label_25a200;
        case 0x25a204u: goto label_25a204;
        case 0x25a208u: goto label_25a208;
        case 0x25a20cu: goto label_25a20c;
        case 0x25a210u: goto label_25a210;
        case 0x25a214u: goto label_25a214;
        case 0x25a218u: goto label_25a218;
        case 0x25a21cu: goto label_25a21c;
        case 0x25a220u: goto label_25a220;
        case 0x25a224u: goto label_25a224;
        case 0x25a228u: goto label_25a228;
        case 0x25a22cu: goto label_25a22c;
        case 0x25a230u: goto label_25a230;
        case 0x25a234u: goto label_25a234;
        case 0x25a238u: goto label_25a238;
        case 0x25a23cu: goto label_25a23c;
        case 0x25a240u: goto label_25a240;
        case 0x25a244u: goto label_25a244;
        case 0x25a248u: goto label_25a248;
        case 0x25a24cu: goto label_25a24c;
        case 0x25a250u: goto label_25a250;
        case 0x25a254u: goto label_25a254;
        case 0x25a258u: goto label_25a258;
        case 0x25a25cu: goto label_25a25c;
        case 0x25a260u: goto label_25a260;
        case 0x25a264u: goto label_25a264;
        case 0x25a268u: goto label_25a268;
        case 0x25a26cu: goto label_25a26c;
        case 0x25a270u: goto label_25a270;
        case 0x25a274u: goto label_25a274;
        case 0x25a278u: goto label_25a278;
        case 0x25a27cu: goto label_25a27c;
        case 0x25a280u: goto label_25a280;
        case 0x25a284u: goto label_25a284;
        case 0x25a288u: goto label_25a288;
        case 0x25a28cu: goto label_25a28c;
        case 0x25a290u: goto label_25a290;
        case 0x25a294u: goto label_25a294;
        case 0x25a298u: goto label_25a298;
        case 0x25a29cu: goto label_25a29c;
        case 0x25a2a0u: goto label_25a2a0;
        case 0x25a2a4u: goto label_25a2a4;
        case 0x25a2a8u: goto label_25a2a8;
        case 0x25a2acu: goto label_25a2ac;
        case 0x25a2b0u: goto label_25a2b0;
        case 0x25a2b4u: goto label_25a2b4;
        case 0x25a2b8u: goto label_25a2b8;
        case 0x25a2bcu: goto label_25a2bc;
        case 0x25a2c0u: goto label_25a2c0;
        case 0x25a2c4u: goto label_25a2c4;
        case 0x25a2c8u: goto label_25a2c8;
        case 0x25a2ccu: goto label_25a2cc;
        case 0x25a2d0u: goto label_25a2d0;
        case 0x25a2d4u: goto label_25a2d4;
        case 0x25a2d8u: goto label_25a2d8;
        case 0x25a2dcu: goto label_25a2dc;
        case 0x25a2e0u: goto label_25a2e0;
        case 0x25a2e4u: goto label_25a2e4;
        case 0x25a2e8u: goto label_25a2e8;
        case 0x25a2ecu: goto label_25a2ec;
        case 0x25a2f0u: goto label_25a2f0;
        case 0x25a2f4u: goto label_25a2f4;
        case 0x25a2f8u: goto label_25a2f8;
        case 0x25a2fcu: goto label_25a2fc;
        case 0x25a300u: goto label_25a300;
        case 0x25a304u: goto label_25a304;
        case 0x25a308u: goto label_25a308;
        case 0x25a30cu: goto label_25a30c;
        default: break;
    }

    ctx->pc = 0x25a178u;

label_25a178:
    // 0x25a178: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25a17c:
    // 0x25a17c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25a180:
    // 0x25a180: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25a180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_25a184:
    // 0x25a184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a188:
    // 0x25a188: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25a18c:
    // 0x25a18c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25a190:
    // 0x25a190: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25a194:
    // 0x25a194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25a198:
    // 0x25a198: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25a19c:
    // 0x25a19c: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x25a19cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a1a0:
    // 0x25a1a0: 0x12800052  beqz        $s4, . + 4 + (0x52 << 2)
label_25a1a4:
    if (ctx->pc == 0x25A1A4u) {
        ctx->pc = 0x25A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1A0u;
        // 0x25a1a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1A8u;
        goto label_25a1a8;
    }
    ctx->pc = 0x25A1A0u;
    {
        const bool branch_taken_0x25a1a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1A0u;
        // 0x25a1a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1a0) {
            ctx->pc = 0x25A2ECu;
            goto label_25a2ec;
        }
    }
    ctx->pc = 0x25A1A8u;
label_25a1a8:
    // 0x25a1a8: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25a1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25a1ac:
    // 0x25a1ac: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25a1b0:
    // 0x25a1b0: 0xc041532  jal         func_1054C8
label_25a1b4:
    if (ctx->pc == 0x25A1B4u) {
        ctx->pc = 0x25A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1B0u;
        // 0x25a1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1B8u;
        goto label_25a1b8;
    }
    ctx->pc = 0x25A1B0u;
    SET_GPR_U32(ctx, 31, 0x25A1B8u);
    ctx->pc = 0x25A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1B0u;
    // 0x25a1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A1B0u, 0x25A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1B8u;
label_25a1b8:
    // 0x25a1b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25a1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a1bc:
    // 0x25a1bc: 0xc041532  jal         func_1054C8
label_25a1c0:
    if (ctx->pc == 0x25A1C0u) {
        ctx->pc = 0x25A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1BCu;
        // 0x25a1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1C4u;
        goto label_25a1c4;
    }
    ctx->pc = 0x25A1BCu;
    SET_GPR_U32(ctx, 31, 0x25A1C4u);
    ctx->pc = 0x25A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1BCu;
    // 0x25a1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25A1BCu, 0x25A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1C4u;
label_25a1c4:
    // 0x25a1c4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_25a1c8:
    if (ctx->pc == 0x25A1C8u) {
        ctx->pc = 0x25A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1C4u;
        // 0x25a1c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1CCu;
        goto label_25a1cc;
    }
    ctx->pc = 0x25A1C4u;
    {
        const bool branch_taken_0x25a1c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1C4u;
        // 0x25a1c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a1c4) {
            ctx->pc = 0x25A1F0u;
            goto label_25a1f0;
        }
    }
    ctx->pc = 0x25A1CCu;
label_25a1cc:
    // 0x25a1cc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a1d0:
    // 0x25a1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x25a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_25a1d4:
    // 0x25a1d4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a1d8:
    // 0x25a1d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a1dc:
    // 0x25a1dc: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x25a1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_25a1e0:
    // 0x25a1e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a1e4:
    // 0x25a1e4: 0xc04159e  jal         func_105678
label_25a1e8:
    if (ctx->pc == 0x25A1E8u) {
        ctx->pc = 0x25A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A1E4u;
        // 0x25a1e8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A1ECu;
        goto label_25a1ec;
    }
    ctx->pc = 0x25A1E4u;
    SET_GPR_U32(ctx, 31, 0x25A1ECu);
    ctx->pc = 0x25A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A1E4u;
    // 0x25a1e8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25A1E4u, 0x25A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A1ECu;
label_25a1ec:
    // 0x25a1ec: 0x0  nop
    ctx->pc = 0x25a1ecu;
    // NOP
label_25a1f0:
    // 0x25a1f0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a1f4:
    // 0x25a1f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25a1f8:
    // 0x25a1f8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x25a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_25a1fc:
    // 0x25a1fc: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x25a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25a200:
    // 0x25a200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25a204:
    // 0x25a204: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_25a208:
    // 0x25a208: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_25a20c:
    if (ctx->pc == 0x25A20Cu) {
        ctx->pc = 0x25A210u;
        goto label_25a210;
    }
    ctx->pc = 0x25A208u;
    {
        const bool branch_taken_0x25a208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25a208) {
            ctx->pc = 0x25A28Cu;
            goto label_25a28c;
        }
    }
    ctx->pc = 0x25A210u;
label_25a210:
    // 0x25a210: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_25a214:
    if (ctx->pc == 0x25A214u) {
        ctx->pc = 0x25A218u;
        goto label_25a218;
    }
    ctx->pc = 0x25A210u;
    {
        const bool branch_taken_0x25a210 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a210) {
            ctx->pc = 0x25A250u;
            goto label_25a250;
        }
    }
    ctx->pc = 0x25A218u;
label_25a218:
    // 0x25a218: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25a21c:
    // 0x25a21c: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x25a21cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a220:
    // 0x25a220: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25a224:
    // 0x25a224: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25a228:
    // 0x25a228: 0x40f809  jalr        $v0
label_25a22c:
    if (ctx->pc == 0x25A22Cu) {
        ctx->pc = 0x25A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A228u;
        // 0x25a22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A230u;
        goto label_25a230;
    }
    ctx->pc = 0x25A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A230u);
        ctx->pc = 0x25A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A228u;
        // 0x25a22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A228u, 0x25A230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A230u;
label_25a230:
    // 0x25a230: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25a230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25a234:
    // 0x25a234: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25a234u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25a238:
    // 0x25a238: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25a23c:
    // 0x25a23c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25a240:
    // 0x25a240: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25a240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a244:
    // 0x25a244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a248:
    // 0x25a248: 0xc041b20  jal         func_106C80
label_25a24c:
    if (ctx->pc == 0x25A24Cu) {
        ctx->pc = 0x25A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A248u;
        // 0x25a24c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A250u;
        goto label_25a250;
    }
    ctx->pc = 0x25A248u;
    SET_GPR_U32(ctx, 31, 0x25A250u);
    ctx->pc = 0x25A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A248u;
    // 0x25a24c: 0x3c060008  lui         $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25A248u, 0x25A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A250u;
label_25a250:
    // 0x25a250: 0xc05d484  jal         func_175210
label_25a254:
    if (ctx->pc == 0x25A254u) {
        ctx->pc = 0x25A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A250u;
        // 0x25a254: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A258u;
        goto label_25a258;
    }
    ctx->pc = 0x25A250u;
    SET_GPR_U32(ctx, 31, 0x25A258u);
    ctx->pc = 0x25A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A250u;
    // 0x25a254: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25A250u, 0x25A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A258u;
label_25a258:
    // 0x25a258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a25c:
    // 0x25a25c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25a25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25a260:
    // 0x25a260: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25a260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25a264:
    // 0x25a264: 0xa0f809  jalr        $a1
label_25a268:
    if (ctx->pc == 0x25A268u) {
        ctx->pc = 0x25A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A264u;
        // 0x25a268: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A26Cu;
        goto label_25a26c;
    }
    ctx->pc = 0x25A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25A26Cu);
        ctx->pc = 0x25A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A264u;
        // 0x25a268: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A264u, 0x25A26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A26Cu;
label_25a26c:
    // 0x25a26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a270:
    // 0x25a270: 0xc087016  jal         func_21C058
label_25a274:
    if (ctx->pc == 0x25A274u) {
        ctx->pc = 0x25A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A270u;
        // 0x25a274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A278u;
        goto label_25a278;
    }
    ctx->pc = 0x25A270u;
    SET_GPR_U32(ctx, 31, 0x25A278u);
    ctx->pc = 0x25A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A270u;
    // 0x25a274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25A270u, 0x25A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A278u;
label_25a278:
    // 0x25a278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a27c:
    // 0x25a27c: 0xc089990  jal         func_226640
label_25a280:
    if (ctx->pc == 0x25A280u) {
        ctx->pc = 0x25A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A27Cu;
        // 0x25a280: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A284u;
        goto label_25a284;
    }
    ctx->pc = 0x25A27Cu;
    SET_GPR_U32(ctx, 31, 0x25A284u);
    ctx->pc = 0x25A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A27Cu;
    // 0x25a280: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25A27Cu, 0x25A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A284u;
label_25a284:
    // 0x25a284: 0x10000014  b           . + 4 + (0x14 << 2)
label_25a288:
    if (ctx->pc == 0x25A288u) {
        ctx->pc = 0x25A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A284u;
        // 0x25a288: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A28Cu;
        goto label_25a28c;
    }
    ctx->pc = 0x25A284u;
    {
        const bool branch_taken_0x25a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A284u;
        // 0x25a288: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a284) {
            ctx->pc = 0x25A2D8u;
            goto label_25a2d8;
        }
    }
    ctx->pc = 0x25A28Cu;
label_25a28c:
    // 0x25a28c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_25a290:
    if (ctx->pc == 0x25A290u) {
        ctx->pc = 0x25A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A28Cu;
        // 0x25a290: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A294u;
        goto label_25a294;
    }
    ctx->pc = 0x25A28Cu;
    {
        const bool branch_taken_0x25a28c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A28Cu;
        // 0x25a290: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a28c) {
            ctx->pc = 0x25A2ACu;
            goto label_25a2ac;
        }
    }
    ctx->pc = 0x25A294u;
label_25a294:
    // 0x25a294: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25a294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25a298:
    // 0x25a298: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25a298u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25a29c:
    // 0x25a29c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a29cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25a2a0:
    // 0x25a2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a2a4:
    // 0x25a2a4: 0xc041b20  jal         func_106C80
label_25a2a8:
    if (ctx->pc == 0x25A2A8u) {
        ctx->pc = 0x25A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2A4u;
        // 0x25a2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2ACu;
        goto label_25a2ac;
    }
    ctx->pc = 0x25A2A4u;
    SET_GPR_U32(ctx, 31, 0x25A2ACu);
    ctx->pc = 0x25A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2A4u;
    // 0x25a2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25A2A4u, 0x25A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2ACu;
label_25a2ac:
    // 0x25a2ac: 0xc05d484  jal         func_175210
label_25a2b0:
    if (ctx->pc == 0x25A2B0u) {
        ctx->pc = 0x25A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2ACu;
        // 0x25a2b0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2B4u;
        goto label_25a2b4;
    }
    ctx->pc = 0x25A2ACu;
    SET_GPR_U32(ctx, 31, 0x25A2B4u);
    ctx->pc = 0x25A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2ACu;
    // 0x25a2b0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25A2ACu, 0x25A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2B4u;
label_25a2b4:
    // 0x25a2b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25a2b8:
    // 0x25a2b8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25a2b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25a2bc:
    // 0x25a2bc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25a2c0:
    // 0x25a2c0: 0xa0f809  jalr        $a1
label_25a2c4:
    if (ctx->pc == 0x25A2C4u) {
        ctx->pc = 0x25A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2C0u;
        // 0x25a2c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2C8u;
        goto label_25a2c8;
    }
    ctx->pc = 0x25A2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25A2C8u);
        ctx->pc = 0x25A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2C0u;
        // 0x25a2c4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2C0u, 0x25A2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A2C8u;
label_25a2c8:
    // 0x25a2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25a2cc:
    // 0x25a2cc: 0xc087016  jal         func_21C058
label_25a2d0:
    if (ctx->pc == 0x25A2D0u) {
        ctx->pc = 0x25A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2CCu;
        // 0x25a2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2D4u;
        goto label_25a2d4;
    }
    ctx->pc = 0x25A2CCu;
    SET_GPR_U32(ctx, 31, 0x25A2D4u);
    ctx->pc = 0x25A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2CCu;
    // 0x25a2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25A2CCu, 0x25A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2D4u;
label_25a2d4:
    // 0x25a2d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25a2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25a2d8:
    // 0x25a2d8: 0xc05d53a  jal         func_1754E8
label_25a2dc:
    if (ctx->pc == 0x25A2DCu) {
        ctx->pc = 0x25A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2D8u;
        // 0x25a2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2E0u;
        goto label_25a2e0;
    }
    ctx->pc = 0x25A2D8u;
    SET_GPR_U32(ctx, 31, 0x25A2E0u);
    ctx->pc = 0x25A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2D8u;
    // 0x25a2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25A2D8u, 0x25A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2E0u;
label_25a2e0:
    // 0x25a2e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25a2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25a2e4:
    // 0x25a2e4: 0xc05d4f6  jal         func_1753D8
label_25a2e8:
    if (ctx->pc == 0x25A2E8u) {
        ctx->pc = 0x25A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2E4u;
        // 0x25a2e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2ECu;
        goto label_25a2ec;
    }
    ctx->pc = 0x25A2E4u;
    SET_GPR_U32(ctx, 31, 0x25A2ECu);
    ctx->pc = 0x25A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2E4u;
    // 0x25a2e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25A2E4u, 0x25A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2ECu;
label_25a2ec:
    // 0x25a2ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25a2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25a2f0:
    // 0x25a2f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25a2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25a2f4:
    // 0x25a2f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25a2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25a2f8:
    // 0x25a2f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25a2f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25a2fc:
    // 0x25a2fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25a2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25a300:
    // 0x25a300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25a304:
    // 0x25a304: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25a308:
    // 0x25a308: 0x3e00008  jr          $ra
label_25a30c:
    if (ctx->pc == 0x25A30Cu) {
        ctx->pc = 0x25A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A308u;
        // 0x25a30c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A310u;
        goto label_fallthrough_0x25a308;
    }
    ctx->pc = 0x25A308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A308u;
        // 0x25a30c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25a308:
    ctx->pc = 0x25A310u;
}
