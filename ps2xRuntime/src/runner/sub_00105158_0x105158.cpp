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

// Function: sub_00105158
// Address: 0x105158 - 0x1054a8
void sub_00105158_0x105158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105158_0x105158");
#endif

    switch (ctx->pc) {
        case 0x1051f0u: goto label_1051f0;
        case 0x105228u: goto label_105228;
        case 0x105270u: goto label_105270;
        case 0x1052d4u: goto label_1052d4;
        case 0x105334u: goto label_105334;
        case 0x1053b4u: goto label_1053b4;
        case 0x105408u: goto label_105408;
        case 0x105458u: goto label_105458;
        default: break;
    }

    ctx->pc = 0x105158u;

    // 0x105158: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x105158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x10515c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x10515cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x105160: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x105160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x105164: 0x24070240  addiu       $a3, $zero, 0x240
    ctx->pc = 0x105164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x105168: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x105168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x10516c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x10516cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x105170: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x105170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105174: 0x8cc4a894  lw          $a0, -0x576C($a2)
    ctx->pc = 0x105174u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50A894u));
    // 0x105178: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x105178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10517c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x10517cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x105180: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x105180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x105184: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x105184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x105188: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x105188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x10518c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x105190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x105190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x105194: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x105194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x105198: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x105198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10519c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10519Cu;
    {
        const bool branch_taken_0x10519c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1051A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10519Cu;
        // 0x1051a0: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10519c) {
            ctx->pc = 0x1051ACu;
            goto label_1051ac;
        }
    }
    ctx->pc = 0x1051A4u;
    // 0x1051a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1051a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1051a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1051a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1051ac:
    // 0x1051ac: 0x8cc5a894  lw          $a1, -0x576C($a2)
    ctx->pc = 0x1051acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944916)));
    // 0x1051b0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1051b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1051b4: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1051b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1051b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1051bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1051bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1051c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1051c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1051c4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1051c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1051c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1051cc: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x1051CCu;
    {
        const bool branch_taken_0x1051cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051CCu;
        // 0x1051d0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051cc) {
            ctx->pc = 0x105258u;
            goto label_105258;
        }
    }
    ctx->pc = 0x1051D4u;
    // 0x1051d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1051d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051d8: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x1051d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1051dc: 0x2e930002  sltiu       $s3, $s4, 0x2
    ctx->pc = 0x1051dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1051e0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1051E0u;
    {
        const bool branch_taken_0x1051e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051E0u;
        // 0x1051e4: 0x14a900  sll         $s5, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051e0) {
            ctx->pc = 0x105208u;
            goto label_105208;
        }
    }
    ctx->pc = 0x1051E8u;
    // 0x1051e8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1051e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051ec: 0x0  nop
    ctx->pc = 0x1051ecu;
    // NOP
label_1051f0:
    // 0x1051f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1051f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1051f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1051f8: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1051f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1051fc: 0x0  nop
    ctx->pc = 0x1051fcu;
    // NOP
    // 0x105200: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x105200u;
    {
        const bool branch_taken_0x105200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105200u;
        // 0x105204: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105200) {
            ctx->pc = 0x1051F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1051f0;
        }
    }
    ctx->pc = 0x105208u;
label_105208:
    // 0x105208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10520c: 0x2e020022  sltiu       $v0, $s0, 0x22
    ctx->pc = 0x10520cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x105210: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x105210u;
    {
        const bool branch_taken_0x105210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105210u;
        // 0x105214: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105210) {
            ctx->pc = 0x105288u;
            goto label_105288;
        }
    }
    ctx->pc = 0x105218u;
    // 0x105218: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x105218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10521c: 0x8c447200  lw          $a0, 0x7200($v0)
    ctx->pc = 0x10521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29184)));
    // 0x105220: 0x7d3821  addu        $a3, $v1, $sp
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x105224: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x105224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_105228:
    // 0x105228: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x105228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10522c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10522cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x105230: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x105230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x105234: 0x2e050022  sltiu       $a1, $s0, 0x22
    ctx->pc = 0x105234u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x105238: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x105238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10523c: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x105240: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105244: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x105244u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x105248: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x105248u;
    {
        const bool branch_taken_0x105248 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105248u;
        // 0x10524c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105248) {
            ctx->pc = 0x105228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105228;
        }
    }
    ctx->pc = 0x105250u;
    // 0x105250: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x105250u;
    {
        const bool branch_taken_0x105250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105250) {
            ctx->pc = 0x105288u;
            goto label_105288;
        }
    }
    ctx->pc = 0x105258u;
label_105258:
    // 0x105258: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10525c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10525cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105260: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x105260u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105264: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x105264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105268: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x105268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x10526c: 0x0  nop
    ctx->pc = 0x10526cu;
    // NOP
label_105270:
    // 0x105270: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x105270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x105274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x105278: 0x2e020022  sltiu       $v0, $s0, 0x22
    ctx->pc = 0x105278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x10527c: 0x0  nop
    ctx->pc = 0x10527cu;
    // NOP
    // 0x105280: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x105280u;
    {
        const bool branch_taken_0x105280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105280u;
        // 0x105284: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105280) {
            ctx->pc = 0x105270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105270;
        }
    }
    ctx->pc = 0x105288u;
label_105288:
    // 0x105288: 0x16800019  bnez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x105288u;
    {
        const bool branch_taken_0x105288 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x105288) {
            ctx->pc = 0x1052F0u;
            goto label_1052f0;
        }
    }
    ctx->pc = 0x105290u;
    // 0x105290: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x105290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105294: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x105294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x105298: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x105298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x10529c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1052a0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1052A0u;
    {
        const bool branch_taken_0x1052a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1052a0) {
            ctx->pc = 0x1052F0u;
            goto label_1052f0;
        }
    }
    ctx->pc = 0x1052A8u;
    // 0x1052a8: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x1052a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1052ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1052acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1052b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1052B0u;
    {
        const bool branch_taken_0x1052b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052B0u;
        // 0x1052b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052b0) {
            ctx->pc = 0x1052C4u;
            goto label_1052c4;
        }
    }
    ctx->pc = 0x1052B8u;
    // 0x1052b8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1052b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1052bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1052BCu;
    {
        const bool branch_taken_0x1052bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052BCu;
        // 0x1052c0: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052bc) {
            ctx->pc = 0x1052F0u;
            goto label_1052f0;
        }
    }
    ctx->pc = 0x1052C4u;
label_1052c4:
    // 0x1052c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1052c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1052c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1052cc: 0xc0cdaee  jal         func_336BB8
    ctx->pc = 0x1052CCu;
    SET_GPR_U32(ctx, 31, 0x1052D4u);
    ctx->pc = 0x1052D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052CCu;
    // 0x1052d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x1052CCu, 0x1052D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052D4u;
label_1052d4:
    // 0x1052d4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x1052d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1052d8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1052d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1052dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1052dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1052e0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x1052e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x1052e4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1052e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1052e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1052e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1052ec: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1052ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1052f0:
    // 0x1052f0: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1052F0u;
    {
        const bool branch_taken_0x1052f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052F0u;
        // 0x1052f4: 0x26a20020  addiu       $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052f0) {
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x1052F8u;
    // 0x1052f8: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x1052f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1052fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1052fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x105300: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x105300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x105304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105308u;
    {
        const bool branch_taken_0x105308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105308u;
        // 0x10530c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105308) {
            ctx->pc = 0x105324u;
            goto label_105324;
        }
    }
    ctx->pc = 0x105310u;
    // 0x105310: 0xde420010  ld          $v0, 0x10($s2)
    ctx->pc = 0x105310u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x105314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105318: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x105318u;
    {
        const bool branch_taken_0x105318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105318u;
        // 0x10531c: 0x26a20020  addiu       $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105318) {
            ctx->pc = 0x105354u;
            goto label_105354;
        }
    }
    ctx->pc = 0x105320u;
    // 0x105320: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x105320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_105324:
    // 0x105324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x105328: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x105328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10532c: 0xc0cdaee  jal         func_336BB8
    ctx->pc = 0x10532Cu;
    SET_GPR_U32(ctx, 31, 0x105334u);
    ctx->pc = 0x105330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10532Cu;
    // 0x105330: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BB8u, 0x10532Cu, 0x105334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105334u;
label_105334:
    // 0x105334: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x105334u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x105338: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x105338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x10533c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10533cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x105340: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x105340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x105344: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x105344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x105348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10534c: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x10534cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x105350: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x105350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_105354:
    // 0x105354: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x105354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x105358: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10535c: 0x16800020  bnez        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x10535Cu;
    {
        const bool branch_taken_0x10535c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x105360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10535Cu;
        // 0x105360: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10535c) {
            ctx->pc = 0x1053E0u;
            goto label_1053e0;
        }
    }
    ctx->pc = 0x105364u;
    // 0x105364: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x105364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105368: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x105368u;
    {
        const bool branch_taken_0x105368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105368) {
            ctx->pc = 0x10536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105368u;
            // 0x10536c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1053D4u;
            goto label_1053d4;
        }
    }
    ctx->pc = 0x105370u;
    // 0x105370: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x105370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105374: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x105374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x105378: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x105378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x10537c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105380: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105380u;
    {
        const bool branch_taken_0x105380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105380) {
            ctx->pc = 0x105384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105380u;
            // 0x105384: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105394u;
            goto label_105394;
        }
    }
    ctx->pc = 0x105388u;
    // 0x105388: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x105388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10538c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10538Cu;
    {
        const bool branch_taken_0x10538c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10538Cu;
        // 0x105390: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10538c) {
            ctx->pc = 0x1053D0u;
            goto label_1053d0;
        }
    }
    ctx->pc = 0x105394u;
label_105394:
    // 0x105394: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105398: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x105398u;
    {
        const bool branch_taken_0x105398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105398) {
            ctx->pc = 0x10539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105398u;
            // 0x10539c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1053D4u;
            goto label_1053d4;
        }
    }
    ctx->pc = 0x1053A0u;
    // 0x1053a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1053a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1053a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1053a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1053ac: 0xc0cda80  jal         func_336A00
    ctx->pc = 0x1053ACu;
    SET_GPR_U32(ctx, 31, 0x1053B4u);
    ctx->pc = 0x1053B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1053ACu;
    // 0x1053b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x1053ACu, 0x1053B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1053B4u;
label_1053b4:
    // 0x1053b4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x1053b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1053b8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1053b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1053bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1053bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1053c0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x1053c4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1053c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1053c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1053c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1053cc: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1053ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1053d0:
    // 0x1053d0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1053d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1053d4:
    // 0x1053d4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1053d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1053d8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1053d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1053dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1053dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1053e0:
    // 0x1053e0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1053e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1053e4: 0x2e020022  sltiu       $v0, $s0, 0x22
    ctx->pc = 0x1053e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x1053e8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1053E8u;
    {
        const bool branch_taken_0x1053e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053E8u;
        // 0x1053ec: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053e8) {
            ctx->pc = 0x105480u;
            goto label_105480;
        }
    }
    ctx->pc = 0x1053F0u;
    // 0x1053f0: 0x3c15bfff  lui         $s5, 0xBFFF
    ctx->pc = 0x1053f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49151 << 16));
    // 0x1053f4: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1053f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1053f8: 0x15a8b8  dsll        $s5, $s5, 2
    ctx->pc = 0x1053f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 2);
    // 0x1053fc: 0x36b50003  ori         $s5, $s5, 0x3
    ctx->pc = 0x1053fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)3);
    // 0x105400: 0x5da021  addu        $s4, $v0, $sp
    ctx->pc = 0x105400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x105404: 0x0  nop
    ctx->pc = 0x105404u;
    // NOP
label_105408:
    // 0x105408: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10540c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x10540Cu;
    {
        const bool branch_taken_0x10540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10540c) {
            ctx->pc = 0x105410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10540Cu;
            // 0x105410: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105468u;
            goto label_105468;
        }
    }
    ctx->pc = 0x105414u;
    // 0x105414: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x105414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105418: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x105418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10541c: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x10541cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x105420: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105424: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105424u;
    {
        const bool branch_taken_0x105424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105424u;
        // 0x105428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105424) {
            ctx->pc = 0x105448u;
            goto label_105448;
        }
    }
    ctx->pc = 0x10542Cu;
    // 0x10542c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x10542cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x105430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x105434: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x105434u;
    {
        const bool branch_taken_0x105434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105434u;
        // 0x105438: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105434) {
            ctx->pc = 0x10544Cu;
            goto label_10544c;
        }
    }
    ctx->pc = 0x10543Cu;
    // 0x10543c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x10543cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x105440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x105440u;
    {
        const bool branch_taken_0x105440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105440u;
        // 0x105444: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105440) {
            ctx->pc = 0x105464u;
            goto label_105464;
        }
    }
    ctx->pc = 0x105448u;
label_105448:
    // 0x105448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10544c:
    // 0x10544c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10544cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x105450: 0xc0cda80  jal         func_336A00
    ctx->pc = 0x105450u;
    SET_GPR_U32(ctx, 31, 0x105458u);
    ctx->pc = 0x105454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105450u;
    // 0x105454: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x105450u, 0x105458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105458u;
label_105458:
    // 0x105458: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x105458u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10545c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x10545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x105460: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x105460u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_105464:
    // 0x105464: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x105464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_105468:
    // 0x105468: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x105468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10546c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x10546cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x105470: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x105470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x105474: 0x2e020022  sltiu       $v0, $s0, 0x22
    ctx->pc = 0x105474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x105478: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x105478u;
    {
        const bool branch_taken_0x105478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105478u;
        // 0x10547c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105478) {
            ctx->pc = 0x105408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105408;
        }
    }
    ctx->pc = 0x105480u;
label_105480:
    // 0x105480: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x105480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x105484: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x105484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x105488: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x105488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10548c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x10548cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105490: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x105490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105494: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x105494u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105498: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x105498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10549c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x10549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1054a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1054A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1054A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054A0u;
        // 0x1054a4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1054A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1054A8u;
}
