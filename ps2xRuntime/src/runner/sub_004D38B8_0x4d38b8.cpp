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

// Function: sub_004D38B8
// Address: 0x4d38b8 - 0x4d3ba8
void sub_004D38B8_0x4d38b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D38B8_0x4d38b8");
#endif

    switch (ctx->pc) {
        case 0x4d38e8u: goto label_4d38e8;
        case 0x4d3900u: goto label_4d3900;
        case 0x4d3948u: goto label_4d3948;
        case 0x4d3970u: goto label_4d3970;
        case 0x4d3ad8u: goto label_4d3ad8;
        case 0x4d3af8u: goto label_4d3af8;
        default: break;
    }

    ctx->pc = 0x4d38b8u;

    // 0x4d38b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d38b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d38bc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x4d38bcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d38c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d38c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d38c4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4d38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d38c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d38cc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4d38ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d38d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d38d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d38d4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4d38d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4d38d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d38d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d38dc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x4d38dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d38e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D38E0u;
    {
        const bool branch_taken_0x4d38e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38E0u;
        // 0x4d38e4: 0xadc00000  sw          $zero, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d38e0) {
            ctx->pc = 0x4D3930u;
            goto label_4d3930;
        }
    }
    ctx->pc = 0x4D38E8u;
label_4d38e8:
    // 0x4d38e8: 0x1b00000c  blez        $t8, . + 4 + (0xC << 2)
    ctx->pc = 0x4D38E8u;
    {
        const bool branch_taken_0x4d38e8 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x4D38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D38E8u;
        // 0x4d38ec: 0x42043  sra         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d38e8) {
            ctx->pc = 0x4D391Cu;
            goto label_4d391c;
        }
    }
    ctx->pc = 0x4D38F0u;
    // 0x4d38f0: 0x181080  sll         $v0, $t8, 2
    ctx->pc = 0x4d38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x4d38f4: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x4d38f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d38f8: 0x4e1821  addu        $v1, $v0, $t6
    ctx->pc = 0x4d38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x4d38fc: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x4d38fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_4d3900:
    // 0x4d3900: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d3904: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d3904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d3908: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d3908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d390c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d3910: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4d3910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4d3914: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4D3914u;
    {
        const bool branch_taken_0x4d3914 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3914u;
        // 0x4d3918: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3914) {
            ctx->pc = 0x4D3900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3900;
        }
    }
    ctx->pc = 0x4D391Cu;
label_4d391c:
    // 0x4d391c: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x4d391cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x4d3920: 0x1810c0  sll         $v0, $t8, 3
    ctx->pc = 0x4d3920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x4d3924: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4d3924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4d3928: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D3928u;
    {
        const bool branch_taken_0x4d3928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3928) {
            ctx->pc = 0x4D38E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d38e8;
        }
    }
    ctx->pc = 0x4D3930u;
label_4d3930:
    // 0x4d3930: 0x1810c0  sll         $v0, $t8, 3
    ctx->pc = 0x4d3930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x4d3934: 0x14440062  bne         $v0, $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x4D3934u;
    {
        const bool branch_taken_0x4d3934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4D3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3934u;
        // 0x4d3938: 0x186040  sll         $t4, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3934) {
            ctx->pc = 0x4D3AC0u;
            goto label_4d3ac0;
        }
    }
    ctx->pc = 0x4D393Cu;
    // 0x4d393c: 0x1b000094  blez        $t8, . + 4 + (0x94 << 2)
    ctx->pc = 0x4D393Cu;
    {
        const bool branch_taken_0x4d393c = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x4D3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D393Cu;
        // 0x4d3940: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d393c) {
            ctx->pc = 0x4D3B90u;
            goto label_4d3b90;
        }
    }
    ctx->pc = 0x4D3944u;
    // 0x4d3944: 0x0  nop
    ctx->pc = 0x4d3944u;
    // NOP
label_4d3948:
    // 0x4d3948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d3948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d394c: 0xb8880  sll         $s1, $t3, 2
    ctx->pc = 0x4d394cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4d3950: 0xb8040  sll         $s0, $t3, 1
    ctx->pc = 0x4d3950u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4d3954: 0x19600044  blez        $t3, . + 4 + (0x44 << 2)
    ctx->pc = 0x4D3954u;
    {
        const bool branch_taken_0x4d3954 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4D3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3954u;
        // 0x4d3958: 0x25790001  addiu       $t9, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3954) {
            ctx->pc = 0x4D3A68u;
            goto label_4d3a68;
        }
    }
    ctx->pc = 0x4D395Cu;
    // 0x4d395c: 0x22e1021  addu        $v0, $s1, $t6
    ctx->pc = 0x4d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x4d3960: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4d3960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3964: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4d3964u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3968: 0xc7840  sll         $t7, $t4, 1
    ctx->pc = 0x4d3968u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x4d396c: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x4d396cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4d3970:
    // 0x4d3970: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4d3970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d3974: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x4d3974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x4d3978: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x4d3978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4d397c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d397cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d3980: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x4d3980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4d3984: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3988: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d3988u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d398c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3990: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d3990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d3994: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4d3994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3998: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4d3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d399c: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x4d399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x4d39a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4d39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d39a4: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d39a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d39a8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d39a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d39ac: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d39acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d39b0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d39b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d39b4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d39b8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d39b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d39bc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d39c0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4d39c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d39c4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d39c8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4d39c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d39cc: 0xec3823  subu        $a3, $a3, $t4
    ctx->pc = 0x4d39ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d39d0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x4d39d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d39d4: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d39d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d39d8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d39dc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4d39dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d39e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d39e4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x4d39e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d39e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d39ec: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4d39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d39f0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4d39f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d39f4: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d39f8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d39f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d39fc: 0xef3821  addu        $a3, $a3, $t7
    ctx->pc = 0x4d39fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x4d3a00: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x4d3a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d3a04: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4d3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3a08: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x4d3a08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d3a0c: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d3a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3a10: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x4d3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3a14: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3a18: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4d3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3a1c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3a20: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4d3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3a24: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3a28: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d3a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3a2c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x4d3a2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x4d3a30: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d3a34: 0x12b282a  slt         $a1, $t1, $t3
    ctx->pc = 0x4d3a34u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4d3a38: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x4d3a38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d3a3c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x4d3a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4d3a40: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x4d3a40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4d3a44: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4d3a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3a48: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3a4c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3a50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3a54: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3a58: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3a5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3a60: 0x14a0ffc3  bnez        $a1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x4D3A60u;
    {
        const bool branch_taken_0x4d3a60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3A60u;
        // 0x4d3a64: 0xe4630000  swc1        $f3, 0x0($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3a60) {
            ctx->pc = 0x4D3970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3970;
        }
    }
    ctx->pc = 0x4D3A68u;
label_4d3a68:
    // 0x4d3a68: 0x22e1021  addu        $v0, $s1, $t6
    ctx->pc = 0x4d3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
    // 0x4d3a6c: 0x20c2021  addu        $a0, $s0, $t4
    ctx->pc = 0x4d3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x4d3a70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4d3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3a74: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x4d3a74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3a78: 0x178282a  slt         $a1, $t3, $t8
    ctx->pc = 0x4d3a78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d3a7c: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x4d3a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4d3a80: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d3a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3a84: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3a88: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4d3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3a8c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3a90: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3a94: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4d3a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3a98: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3a9c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3aa0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3aa4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3aa8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3aac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3ab0: 0x14a0ffa5  bnez        $a1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x4D3AB0u;
    {
        const bool branch_taken_0x4d3ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3AB0u;
        // 0x4d3ab4: 0xe4630000  swc1        $f3, 0x0($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3ab0) {
            ctx->pc = 0x4D3948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3948;
        }
    }
    ctx->pc = 0x4D3AB8u;
    // 0x4d3ab8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x4D3AB8u;
    {
        const bool branch_taken_0x4d3ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3AB8u;
        // 0x4d3abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3ab8) {
            ctx->pc = 0x4D3B94u;
            goto label_4d3b94;
        }
    }
    ctx->pc = 0x4D3AC0u;
label_4d3ac0:
    // 0x4d3ac0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4d3ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d3ac4: 0x178102a  slt         $v0, $t3, $t8
    ctx->pc = 0x4d3ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d3ac8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4D3AC8u;
    {
        const bool branch_taken_0x4d3ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3AC8u;
        // 0x4d3acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3ac8) {
            ctx->pc = 0x4D3B94u;
            goto label_4d3b94;
        }
    }
    ctx->pc = 0x4D3AD0u;
    // 0x4d3ad0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d3ad0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3ad4: 0x0  nop
    ctx->pc = 0x4d3ad4u;
    // NOP
label_4d3ad8:
    // 0x4d3ad8: 0x19600029  blez        $t3, . + 4 + (0x29 << 2)
    ctx->pc = 0x4D3AD8u;
    {
        const bool branch_taken_0x4d3ad8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4D3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3AD8u;
        // 0x4d3adc: 0x25790001  addiu       $t9, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3ad8) {
            ctx->pc = 0x4D3B80u;
            goto label_4d3b80;
        }
    }
    ctx->pc = 0x4D3AE0u;
    // 0x4d3ae0: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x4d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4d3ae4: 0xb7840  sll         $t7, $t3, 1
    ctx->pc = 0x4d3ae4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4d3ae8: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x4d3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x4d3aec: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4d3aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3af0: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x4d3af0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3af4: 0x0  nop
    ctx->pc = 0x4d3af4u;
    // NOP
label_4d3af8:
    // 0x4d3af8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4d3af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d3afc: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x4d3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x4d3b00: 0x4d4021  addu        $t0, $v0, $t5
    ctx->pc = 0x4d3b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4d3b04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d3b04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d3b08: 0x1e43821  addu        $a3, $t7, $a0
    ctx->pc = 0x4d3b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x4d3b0c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3b10: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3b14: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3b18: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d3b1c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x4d3b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3b20: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4d3b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3b24: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d3b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d3b28: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3b2c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d3b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3b30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3b34: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d3b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3b38: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3b3c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d3b40: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3b44: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3b48: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x4d3b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d3b4c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3b50: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x4d3b50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d3b54: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4d3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4d3b58: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x4d3b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d3b5c: 0x12b182a  slt         $v1, $t1, $t3
    ctx->pc = 0x4d3b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4d3b60: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d3b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3b64: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3b68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3b6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3b70: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3b74: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x4d3b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d3b78: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4D3B78u;
    {
        const bool branch_taken_0x4d3b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3B78u;
        // 0x4d3b7c: 0xe4a30000  swc1        $f3, 0x0($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3b78) {
            ctx->pc = 0x4D3AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3af8;
        }
    }
    ctx->pc = 0x4D3B80u;
label_4d3b80:
    // 0x4d3b80: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x4d3b80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3b84: 0x178102a  slt         $v0, $t3, $t8
    ctx->pc = 0x4d3b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x4d3b88: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x4D3B88u;
    {
        const bool branch_taken_0x4d3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3b88) {
            ctx->pc = 0x4D3B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D3B88u;
            // 0x4d3b8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D3AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3ad8;
        }
    }
    ctx->pc = 0x4D3B90u;
label_4d3b90:
    // 0x4d3b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3b94:
    // 0x4d3b94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d3b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3b9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D3BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BA0u;
        // 0x4d3ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3BA8u;
}
