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

// Function: sub_004A4158
// Address: 0x4a4158 - 0x4a4448
void sub_004A4158_0x4a4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4158_0x4a4158");
#endif

    switch (ctx->pc) {
        case 0x4a4200u: goto label_4a4200;
        case 0x4a432cu: goto label_4a432c;
        case 0x4a4400u: goto label_4a4400;
        default: break;
    }

    ctx->pc = 0x4a4158u;

    // 0x4a4158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a415c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4a415cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a4160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a4164: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a4164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4a4168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a416c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x4a416cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4170: 0x8f8a8a20  lw          $t2, -0x75E0($gp)
    ctx->pc = 0x4a4170u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4a4174: 0x2448f940  addiu       $t0, $v0, -0x6C0
    ctx->pc = 0x4a4174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x4a4178: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4a4178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a417c: 0x8c43f940  lw          $v1, -0x6C0($v0)
    ctx->pc = 0x4a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x52F940u));
    // 0x4a4180: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x4A4180u;
    {
        const bool branch_taken_0x4a4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4180u;
        // 0x4a4184: 0x8a8021  addu        $s0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4180) {
            ctx->pc = 0x4A4430u;
            goto label_4a4430;
        }
    }
    ctx->pc = 0x4A4188u;
    // 0x4a4188: 0x10a0007d  beqz        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x4A4188u;
    {
        const bool branch_taken_0x4a4188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4188u;
        // 0x4a418c: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4188) {
            ctx->pc = 0x4A4380u;
            goto label_4a4380;
        }
    }
    ctx->pc = 0x4A4190u;
    // 0x4a4190: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4A4190u;
    {
        const bool branch_taken_0x4a4190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4190u;
        // 0x4a4194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4190) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A4198u;
    // 0x4a4198: 0x8d050010  lw          $a1, 0x10($t0)
    ctx->pc = 0x4a4198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4a419c: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x4a419cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4a41a0: 0x144000a4  bnez        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x4A41A0u;
    {
        const bool branch_taken_0x4a41a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A41A0u;
        // 0x4a41a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a41a0) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A41A8u;
    // 0x4a41a8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4a41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a41ac: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x4a41acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4a41b0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x4a41b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a41b4: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x4a41b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a41b8: 0x8d050018  lw          $a1, 0x18($t0)
    ctx->pc = 0x4a41b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x4a41bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a41c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a41c4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4a41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a41c8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x4a41c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a41cc: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x4A41CCu;
    {
        const bool branch_taken_0x4a41cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A41CCu;
        // 0x4a41d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a41cc) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A41D4u;
    // 0x4a41d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a41d8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4a41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4a41dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a41dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a41e0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4A41E0u;
    {
        const bool branch_taken_0x4a41e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A41E0u;
        // 0x4a41e4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a41e0) {
            ctx->pc = 0x4A4258u;
            goto label_4a4258;
        }
    }
    ctx->pc = 0x4A41E8u;
    // 0x4a41e8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4a41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4a41ec: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x4a41ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a41f0: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x4a41f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a41f4: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x4a41f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a41f8: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a41fc: 0x0  nop
    ctx->pc = 0x4a41fcu;
    // NOP
label_4a4200:
    // 0x4a4200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a4200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4a4204: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4a4204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a4208: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x4a4208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x4a420c: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x4a420cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x4a4210: 0xca2818  mult        $a1, $a2, $t2
    ctx->pc = 0x4a4210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a4214: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a4214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a4218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a421c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A421Cu;
    {
        const bool branch_taken_0x4a421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A421Cu;
        // 0x4a4220: 0x481021  addu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a421c) {
            ctx->pc = 0x4A424Cu;
            goto label_4a424c;
        }
    }
    ctx->pc = 0x4A4224u;
    // 0x4a4224: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x4a4224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x4a4228: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4a4228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a422c: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x4a422cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4a4230: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a4230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a4234: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a4234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4238: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A4238u;
    {
        const bool branch_taken_0x4a4238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a4238) {
            ctx->pc = 0x4A423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4238u;
            // 0x4a423c: 0xace00024  sw          $zero, 0x24($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4240u;
            goto label_4a4240;
        }
    }
    ctx->pc = 0x4A4240u;
label_4a4240:
    // 0x4a4240: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x4a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a4244: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a4244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a4248: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a4248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4a424c:
    // 0x4a424c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4a424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4a4250: 0x54c2ffeb  bnel        $a2, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4A4250u;
    {
        const bool branch_taken_0x4a4250 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a4250) {
            ctx->pc = 0x4A4254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4250u;
            // 0x4a4254: 0x8ce20010  lw          $v0, 0x10($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4200;
        }
    }
    ctx->pc = 0x4A4258u;
label_4a4258:
    // 0x4a4258: 0x2567f940  addiu       $a3, $t3, -0x6C0
    ctx->pc = 0x4a4258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965568));
    // 0x4a425c: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x4a425cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a4260: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x4a4260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a4264: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a4264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4268: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4a4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a426c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4270: 0x2486ffff  addiu       $a2, $a0, -0x1
    ctx->pc = 0x4a4270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4a4274: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x4a4274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x4a4278: 0xca2018  mult        $a0, $a2, $t2
    ctx->pc = 0x4a4278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4a427c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4a427cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x4a4280: 0x8f8587b0  lw          $a1, -0x7850($gp)
    ctx->pc = 0x4a4280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x4a4284: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4a4284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a4288: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4a4288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x4a428c: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x4a428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x4a4290: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x4a4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4a4294: 0x8e080030  lw          $t0, 0x30($s0)
    ctx->pc = 0x4a4294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a4298: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A4298u;
    {
        const bool branch_taken_0x4a4298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4A429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4298u;
        // 0x4a429c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4298) {
            ctx->pc = 0x4A42B4u;
            goto label_4a42b4;
        }
    }
    ctx->pc = 0x4A42A0u;
    // 0x4a42a0: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x4a42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x4a42a4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x4a42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4a42a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a42ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A42ACu;
    {
        const bool branch_taken_0x4a42ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A42ACu;
        // 0x4a42b0: 0x481823  subu        $v1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a42ac) {
            ctx->pc = 0x4A42C4u;
            goto label_4a42c4;
        }
    }
    ctx->pc = 0x4A42B4u;
label_4a42b4:
    // 0x4a42b4: 0x4a2818  mult        $a1, $v0, $t2
    ctx->pc = 0x4a42b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a42b8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x4a42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a42bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4a42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4a42c0: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4a42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_4a42c4:
    // 0x4a42c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4a42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a42c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4a42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x4a42cc: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x4a42ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4a42d0: 0x2568f940  addiu       $t0, $t3, -0x6C0
    ctx->pc = 0x4a42d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965568));
    // 0x4a42d4: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x4a42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4a42d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a42d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a42dc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x4a42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x4a42e0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4a42e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4a42e4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4a42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x4a42e8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x4a42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4a42ec: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4a42f0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x4a42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x4a42f4: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x4a42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x4a42f8: 0xa2050017  sb          $a1, 0x17($s0)
    ctx->pc = 0x4a42f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 5));
    // 0x4a42fc: 0x91220020  lbu         $v0, 0x20($t1)
    ctx->pc = 0x4a42fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4a4300: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4a4300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x4a4304: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4A4304u;
    {
        const bool branch_taken_0x4a4304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4304) {
            ctx->pc = 0x4A4308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4304u;
            // 0x4a4308: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4330u;
            goto label_4a4330;
        }
    }
    ctx->pc = 0x4A430Cu;
    // 0x4a430c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4a430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4a4310: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A4310u;
    {
        const bool branch_taken_0x4a4310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4310u;
        // 0x4a4314: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4310) {
            ctx->pc = 0x4A432Cu;
            goto label_4a432c;
        }
    }
    ctx->pc = 0x4A4318u;
    // 0x4a4318: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x4a4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4a431c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a431cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4320: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4a4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a4324: 0xc128a44  jal         func_4A2910
    ctx->pc = 0x4A4324u;
    SET_GPR_U32(ctx, 31, 0x4A432Cu);
    ctx->pc = 0x4A4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4324u;
    // 0x4a4328: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2910u, 0x4A4324u, 0x4A432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A432Cu;
label_4a432c:
    // 0x4a432c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4a432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a4330:
    // 0x4a4330: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a4330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4334: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x4a4334u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a4338: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x4a4338u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x4a433c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a4340: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x4a4340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x4a4344: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a4344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a4348: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x4a4348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x4a434c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4a434cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x4a4350: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a4350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a4354: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x4a4354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a4358: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4a4358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4a435c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x4a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x4a4360: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a4360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a4364: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a4364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4a4368: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x4a4368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x4a436c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4a436cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4a4370: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x4a4374: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a4374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a4378: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4A4378u;
    {
        const bool branch_taken_0x4a4378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4378u;
        // 0x4a437c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4378) {
            ctx->pc = 0x4A4428u;
            goto label_4a4428;
        }
    }
    ctx->pc = 0x4A4380u;
label_4a4380:
    // 0x4a4380: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4A4380u;
    {
        const bool branch_taken_0x4a4380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4380u;
        // 0x4a4384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4380) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A4388u;
    // 0x4a4388: 0xa2000017  sb          $zero, 0x17($s0)
    ctx->pc = 0x4a4388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x4a438c: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x4a438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
    // 0x4a4390: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4a4390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4a4394: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4a4394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x4a4398: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x4a4398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4a439c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4a439cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4a43a0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4a43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a43a4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4a43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4a43a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a43a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a43ac: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x4a43acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x4a43b0: 0x14890002  bne         $a0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A43B0u;
    {
        const bool branch_taken_0x4a43b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x4A43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43B0u;
        // 0x4a43b4: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43b0) {
            ctx->pc = 0x4A43BCu;
            goto label_4a43bc;
        }
    }
    ctx->pc = 0x4A43B8u;
    // 0x4a43b8: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x4a43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_4a43bc:
    // 0x4a43bc: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x4a43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x4a43c0: 0x14c2001c  bne         $a2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4A43C0u;
    {
        const bool branch_taken_0x4a43c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43C0u;
        // 0x4a43c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43c0) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A43C8u;
    // 0x4a43c8: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x4a43c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x4a43cc: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x4a43ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4a43d0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A43D0u;
    {
        const bool branch_taken_0x4a43d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43D0u;
        // 0x4a43d4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43d0) {
            ctx->pc = 0x4A4428u;
            goto label_4a4428;
        }
    }
    ctx->pc = 0x4A43D8u;
    // 0x4a43d8: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x4a43d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x4a43dc: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x4a43dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a43e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a43e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a43e8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4A43E8u;
    {
        const bool branch_taken_0x4a43e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A43E8u;
        // 0x4a43ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a43e8) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A43F0u;
    // 0x4a43f0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a43f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a43f4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4a43f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4a43f8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x4a43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a43fc: 0x0  nop
    ctx->pc = 0x4a43fcu;
    // NOP
label_4a4400:
    // 0x4a4400: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4a4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a4404: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x4a4404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4a4408: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A4408u;
    {
        const bool branch_taken_0x4a4408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4408u;
        // 0x4a440c: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4408) {
            ctx->pc = 0x4A4428u;
            goto label_4a4428;
        }
    }
    ctx->pc = 0x4A4410u;
    // 0x4a4410: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x4a4410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a4414: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x4a4414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a4418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a441c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a4420: 0x5080fff7  beql        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A4420u;
    {
        const bool branch_taken_0x4a4420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4420) {
            ctx->pc = 0x4A4424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A4420u;
            // 0x4a4424: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a4400;
        }
    }
    ctx->pc = 0x4A4428u;
label_4a4428:
    // 0x4a4428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4428u;
    {
        const bool branch_taken_0x4a4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4428u;
        // 0x4a442c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4428) {
            ctx->pc = 0x4A4434u;
            goto label_4a4434;
        }
    }
    ctx->pc = 0x4A4430u;
label_4a4430:
    // 0x4a4430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a4430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4434:
    // 0x4a4434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a4434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a443c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A443Cu;
        // 0x4a4440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4444u;
    // 0x4a4444: 0x0  nop
    ctx->pc = 0x4a4444u;
    // NOP
    ctx->pc = 0x4a4448u;
}
