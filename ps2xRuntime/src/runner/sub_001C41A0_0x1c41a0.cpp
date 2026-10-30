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

// Function: sub_001C41A0
// Address: 0x1c41a0 - 0x1c42e0
void sub_001C41A0_0x1c41a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C41A0_0x1c41a0");
#endif

    switch (ctx->pc) {
        case 0x1c41a0u: goto label_1c41a0;
        case 0x1c41a4u: goto label_1c41a4;
        case 0x1c41a8u: goto label_1c41a8;
        case 0x1c41acu: goto label_1c41ac;
        case 0x1c41b0u: goto label_1c41b0;
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41b8u: goto label_1c41b8;
        case 0x1c41bcu: goto label_1c41bc;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41c4u: goto label_1c41c4;
        case 0x1c41c8u: goto label_1c41c8;
        case 0x1c41ccu: goto label_1c41cc;
        case 0x1c41d0u: goto label_1c41d0;
        case 0x1c41d4u: goto label_1c41d4;
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c41dcu: goto label_1c41dc;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41e4u: goto label_1c41e4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41ecu: goto label_1c41ec;
        case 0x1c41f0u: goto label_1c41f0;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c41f8u: goto label_1c41f8;
        case 0x1c41fcu: goto label_1c41fc;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4204u: goto label_1c4204;
        case 0x1c4208u: goto label_1c4208;
        case 0x1c420cu: goto label_1c420c;
        case 0x1c4210u: goto label_1c4210;
        case 0x1c4214u: goto label_1c4214;
        case 0x1c4218u: goto label_1c4218;
        case 0x1c421cu: goto label_1c421c;
        case 0x1c4220u: goto label_1c4220;
        case 0x1c4224u: goto label_1c4224;
        case 0x1c4228u: goto label_1c4228;
        case 0x1c422cu: goto label_1c422c;
        case 0x1c4230u: goto label_1c4230;
        case 0x1c4234u: goto label_1c4234;
        case 0x1c4238u: goto label_1c4238;
        case 0x1c423cu: goto label_1c423c;
        case 0x1c4240u: goto label_1c4240;
        case 0x1c4244u: goto label_1c4244;
        case 0x1c4248u: goto label_1c4248;
        case 0x1c424cu: goto label_1c424c;
        case 0x1c4250u: goto label_1c4250;
        case 0x1c4254u: goto label_1c4254;
        case 0x1c4258u: goto label_1c4258;
        case 0x1c425cu: goto label_1c425c;
        case 0x1c4260u: goto label_1c4260;
        case 0x1c4264u: goto label_1c4264;
        case 0x1c4268u: goto label_1c4268;
        case 0x1c426cu: goto label_1c426c;
        case 0x1c4270u: goto label_1c4270;
        case 0x1c4274u: goto label_1c4274;
        case 0x1c4278u: goto label_1c4278;
        case 0x1c427cu: goto label_1c427c;
        case 0x1c4280u: goto label_1c4280;
        case 0x1c4284u: goto label_1c4284;
        case 0x1c4288u: goto label_1c4288;
        case 0x1c428cu: goto label_1c428c;
        case 0x1c4290u: goto label_1c4290;
        case 0x1c4294u: goto label_1c4294;
        case 0x1c4298u: goto label_1c4298;
        case 0x1c429cu: goto label_1c429c;
        case 0x1c42a0u: goto label_1c42a0;
        case 0x1c42a4u: goto label_1c42a4;
        case 0x1c42a8u: goto label_1c42a8;
        case 0x1c42acu: goto label_1c42ac;
        case 0x1c42b0u: goto label_1c42b0;
        case 0x1c42b4u: goto label_1c42b4;
        case 0x1c42b8u: goto label_1c42b8;
        case 0x1c42bcu: goto label_1c42bc;
        case 0x1c42c0u: goto label_1c42c0;
        case 0x1c42c4u: goto label_1c42c4;
        case 0x1c42c8u: goto label_1c42c8;
        case 0x1c42ccu: goto label_1c42cc;
        case 0x1c42d0u: goto label_1c42d0;
        case 0x1c42d4u: goto label_1c42d4;
        case 0x1c42d8u: goto label_1c42d8;
        case 0x1c42dcu: goto label_1c42dc;
        default: break;
    }

    ctx->pc = 0x1c41a0u;

label_1c41a0:
    // 0x1c41a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c41a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c41a4:
    // 0x1c41a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c41a8:
    // 0x1c41a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c41a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1c41ac:
    // 0x1c41ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c41acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1c41b0:
    // 0x1c41b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1c41b4:
    // 0x1c41b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c41b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c41b8:
    // 0x1c41b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1c41bc:
    // 0x1c41bc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c41bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c41c0:
    // 0x1c41c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c41c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c41c4:
    // 0x1c41c4: 0x2412007f  addiu       $s2, $zero, 0x7F
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1c41c8:
    // 0x1c41c8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1c41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1c41cc:
    // 0x1c41cc: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x1c41ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_1c41d0:
    // 0x1c41d0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1c41d4:
    // 0x1c41d4: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1c41d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1c41d8:
    // 0x1c41d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c41d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c41dc:
    // 0x1c41dc: 0x247516c0  addiu       $s5, $v1, 0x16C0
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_1c41e0:
    // 0x1c41e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1c41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1c41e4:
    // 0x1c41e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c41e8:
    // 0x1c41e8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1c41ec:
    // 0x1c41ec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c41ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c41f0:
    // 0x1c41f0: 0x8e63bd30  lw          $v1, -0x42D0($s3)
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
label_1c41f4:
    // 0x1c41f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c41f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1c41f8:
    // 0x1c41f8: 0x8e050948  lw          $a1, 0x948($s0)
    ctx->pc = 0x1c41f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c41fc:
    // 0x1c41fc: 0xae030930  sw          $v1, 0x930($s0)
    ctx->pc = 0x1c41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2352), GPR_U32(ctx, 3));
label_1c4200:
    // 0x1c4200: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1c4200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c4204:
    // 0x1c4204: 0xae000934  sw          $zero, 0x934($s0)
    ctx->pc = 0x1c4204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2356), GPR_U32(ctx, 0));
label_1c4208:
    // 0x1c4208: 0x7e020920  sq          $v0, 0x920($s0)
    ctx->pc = 0x1c4208u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2336), GPR_VEC(ctx, 2));
label_1c420c:
    // 0x1c420c: 0xa2000951  sb          $zero, 0x951($s0)
    ctx->pc = 0x1c420cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2385), (uint8_t)GPR_U32(ctx, 0));
label_1c4210:
    // 0x1c4210: 0xa600094c  sh          $zero, 0x94C($s0)
    ctx->pc = 0x1c4210u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2380), (uint16_t)GPR_U32(ctx, 0));
label_1c4214:
    // 0x1c4214: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1c4218:
    if (ctx->pc == 0x1C4218u) {
        ctx->pc = 0x1C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4214u;
        // 0x1c4218: 0xa2000950  sb          $zero, 0x950($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C421Cu;
        goto label_1c421c;
    }
    ctx->pc = 0x1C4214u;
    {
        const bool branch_taken_0x1c4214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4214u;
        // 0x1c4218: 0xa2000950  sb          $zero, 0x950($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4214) {
            ctx->pc = 0x1C4244u;
            goto label_1c4244;
        }
    }
    ctx->pc = 0x1C421Cu;
label_1c421c:
    // 0x1c421c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c4220:
    // 0x1c4220: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c4224:
    // 0x1c4224: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1c4224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c4228:
    // 0x1c4228: 0x60f809  jalr        $v1
label_1c422c:
    if (ctx->pc == 0x1C422Cu) {
        ctx->pc = 0x1C422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4228u;
        // 0x1c422c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4230u;
        goto label_1c4230;
    }
    ctx->pc = 0x1C4228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C4230u);
        ctx->pc = 0x1C422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4228u;
        // 0x1c422c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4228u, 0x1C4230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4230u;
label_1c4230:
    // 0x1c4230: 0x8e040948  lw          $a0, 0x948($s0)
    ctx->pc = 0x1c4230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2376)));
label_1c4234:
    // 0x1c4234: 0x268551a8  addiu       $a1, $s4, 0x51A8
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20904));
label_1c4238:
    // 0x1c4238: 0xc138e72  jal         func_4E39C8
label_1c423c:
    if (ctx->pc == 0x1C423Cu) {
        ctx->pc = 0x1C423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4238u;
        // 0x1c423c: 0x240600a9  addiu       $a2, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4240u;
        goto label_1c4240;
    }
    ctx->pc = 0x1C4238u;
    SET_GPR_U32(ctx, 31, 0x1C4240u);
    ctx->pc = 0x1C423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4238u;
    // 0x1c423c: 0x240600a9  addiu       $a2, $zero, 0xA9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x1C4238u, 0x1C4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4240u;
label_1c4240:
    // 0x1c4240: 0xae000948  sw          $zero, 0x948($s0)
    ctx->pc = 0x1c4240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2376), GPR_U32(ctx, 0));
label_1c4244:
    // 0x1c4244: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x1c4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
label_1c4248:
    // 0x1c4248: 0xae020944  sw          $v0, 0x944($s0)
    ctx->pc = 0x1c4248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2372), GPR_U32(ctx, 2));
label_1c424c:
    // 0x1c424c: 0x641ffe8  bgez        $s2, . + 4 + (-0x18 << 2)
label_1c4250:
    if (ctx->pc == 0x1C4250u) {
        ctx->pc = 0x1C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C424Cu;
        // 0x1c4250: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4254u;
        goto label_1c4254;
    }
    ctx->pc = 0x1C424Cu;
    {
        const bool branch_taken_0x1c424c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C424Cu;
        // 0x1c4250: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c424c) {
            ctx->pc = 0x1C41F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c41f0;
        }
    }
    ctx->pc = 0x1C4254u;
label_1c4254:
    // 0x1c4254: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1c4254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1c4258:
    // 0x1c4258: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x1c4258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c425c:
    // 0x1c425c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c425cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4260:
    // 0x1c4260: 0xc0e70f4  jal         func_39C3D0
label_1c4264:
    if (ctx->pc == 0x1C4264u) {
        ctx->pc = 0x1C4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4260u;
        // 0x1c4264: 0x2633005c  addiu       $s3, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4268u;
        goto label_1c4268;
    }
    ctx->pc = 0x1C4260u;
    SET_GPR_U32(ctx, 31, 0x1C4268u);
    ctx->pc = 0x1C4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4260u;
    // 0x1c4264: 0x2633005c  addiu       $s3, $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3D0u, 0x1C4260u, 0x1C4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4268u;
label_1c4268:
    // 0x1c4268: 0xc0e70f4  jal         func_39C3D0
label_1c426c:
    if (ctx->pc == 0x1C426Cu) {
        ctx->pc = 0x1C426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4268u;
        // 0x1c426c: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4270u;
        goto label_1c4270;
    }
    ctx->pc = 0x1C4268u;
    SET_GPR_U32(ctx, 31, 0x1C4270u);
    ctx->pc = 0x1C426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4268u;
    // 0x1c426c: 0x8e24004c  lw          $a0, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3D0u, 0x1C4268u, 0x1C4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4270u;
label_1c4270:
    // 0x1c4270: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4274:
    // 0x1c4274: 0x0  nop
    ctx->pc = 0x1c4274u;
    // NOP
label_1c4278:
    // 0x1c4278: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c4278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c427c:
    // 0x1c427c: 0xc0e70f4  jal         func_39C3D0
label_1c4280:
    if (ctx->pc == 0x1C4280u) {
        ctx->pc = 0x1C4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C427Cu;
        // 0x1c4280: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4284u;
        goto label_1c4284;
    }
    ctx->pc = 0x1C427Cu;
    SET_GPR_U32(ctx, 31, 0x1C4284u);
    ctx->pc = 0x1C4280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C427Cu;
    // 0x1c4280: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3D0u, 0x1C427Cu, 0x1C4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4284u;
label_1c4284:
    // 0x1c4284: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1c4284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c4288:
    // 0x1c4288: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1c428c:
    if (ctx->pc == 0x1C428Cu) {
        ctx->pc = 0x1C428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4288u;
        // 0x1c428c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4290u;
        goto label_1c4290;
    }
    ctx->pc = 0x1C4288u;
    {
        const bool branch_taken_0x1c4288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4288) {
            ctx->pc = 0x1C428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4288u;
            // 0x1c428c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4278;
        }
    }
    ctx->pc = 0x1C4290u;
label_1c4290:
    // 0x1c4290: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1c4290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c4294:
    // 0x1c4294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4298:
    // 0x1c4298: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c429c:
    // 0x1c429c: 0x0  nop
    ctx->pc = 0x1c429cu;
    // NOP
label_1c42a0:
    // 0x1c42a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c42a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c42a4:
    // 0x1c42a4: 0xc0e70f4  jal         func_39C3D0
label_1c42a8:
    if (ctx->pc == 0x1C42A8u) {
        ctx->pc = 0x1C42A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42A4u;
        // 0x1c42a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C42ACu;
        goto label_1c42ac;
    }
    ctx->pc = 0x1C42A4u;
    SET_GPR_U32(ctx, 31, 0x1C42ACu);
    ctx->pc = 0x1C42A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C42A4u;
    // 0x1c42a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3D0u, 0x1C42A4u, 0x1C42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C42ACu;
label_1c42ac:
    // 0x1c42ac: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1c42acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c42b0:
    // 0x1c42b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1c42b4:
    if (ctx->pc == 0x1C42B4u) {
        ctx->pc = 0x1C42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42B0u;
        // 0x1c42b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C42B8u;
        goto label_1c42b8;
    }
    ctx->pc = 0x1C42B0u;
    {
        const bool branch_taken_0x1c42b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c42b0) {
            ctx->pc = 0x1C42B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C42B0u;
            // 0x1c42b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C42A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c42a0;
        }
    }
    ctx->pc = 0x1C42B8u;
label_1c42b8:
    // 0x1c42b8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c42b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c42bc:
    // 0x1c42bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c42bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c42c0:
    // 0x1c42c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c42c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c42c4:
    // 0x1c42c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c42c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c42c8:
    // 0x1c42c8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1c42c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c42cc:
    // 0x1c42cc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1c42ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c42d0:
    // 0x1c42d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c42d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c42d4:
    // 0x1c42d4: 0x3e00008  jr          $ra
label_1c42d8:
    if (ctx->pc == 0x1C42D8u) {
        ctx->pc = 0x1C42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42D4u;
        // 0x1c42d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C42DCu;
        goto label_1c42dc;
    }
    ctx->pc = 0x1C42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42D4u;
        // 0x1c42d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C42D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C42DCu;
label_1c42dc:
    // 0x1c42dc: 0x0  nop
    ctx->pc = 0x1c42dcu;
    // NOP
    ctx->pc = 0x1c42e0u;
}
