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

// Function: sub_004D3BA8
// Address: 0x4d3ba8 - 0x4d3f50
void sub_004D3BA8_0x4d3ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D3BA8_0x4d3ba8");
#endif

    switch (ctx->pc) {
        case 0x4d3bd8u: goto label_4d3bd8;
        case 0x4d3bf0u: goto label_4d3bf0;
        case 0x4d3c38u: goto label_4d3c38;
        case 0x4d3c60u: goto label_4d3c60;
        case 0x4d3e30u: goto label_4d3e30;
        case 0x4d3e58u: goto label_4d3e58;
        default: break;
    }

    ctx->pc = 0x4d3ba8u;

    // 0x4d3ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d3ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d3bac: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x4d3bacu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d3bb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4d3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d3bb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d3bbc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4d3bbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3bc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d3bc4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4d3bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4d3bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d3bcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4d3bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d3bd0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D3BD0u;
    {
        const bool branch_taken_0x4d3bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BD0u;
        // 0x4d3bd4: 0xade00000  sw          $zero, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3bd0) {
            ctx->pc = 0x4D3C20u;
            goto label_4d3c20;
        }
    }
    ctx->pc = 0x4D3BD8u;
label_4d3bd8:
    // 0x4d3bd8: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4D3BD8u;
    {
        const bool branch_taken_0x4d3bd8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4D3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3BD8u;
        // 0x4d3bdc: 0x42043  sra         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3bd8) {
            ctx->pc = 0x4D3C0Cu;
            goto label_4d3c0c;
        }
    }
    ctx->pc = 0x4D3BE0u;
    // 0x4d3be0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d3be4: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x4d3be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3be8: 0x4f1821  addu        $v1, $v0, $t7
    ctx->pc = 0x4d3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x4d3bec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4d3becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d3bf0:
    // 0x4d3bf0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d3bf4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d3bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d3bf8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d3bfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4d3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d3c00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4d3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4d3c04: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4D3C04u;
    {
        const bool branch_taken_0x4d3c04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3C04u;
        // 0x4d3c08: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3c04) {
            ctx->pc = 0x4D3BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3bf0;
        }
    }
    ctx->pc = 0x4D3C0Cu;
label_4d3c0c:
    // 0x4d3c0c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4d3c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4d3c10: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d3c14: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4d3c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4d3c18: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D3C18u;
    {
        const bool branch_taken_0x4d3c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d3c18) {
            ctx->pc = 0x4D3BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3bd8;
        }
    }
    ctx->pc = 0x4D3C20u;
label_4d3c20:
    // 0x4d3c20: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4d3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d3c24: 0x14440077  bne         $v0, $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x4D3C24u;
    {
        const bool branch_taken_0x4d3c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4D3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3C24u;
        // 0x4d3c28: 0x106040  sll         $t4, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3c24) {
            ctx->pc = 0x4D3E04u;
            goto label_4d3e04;
        }
    }
    ctx->pc = 0x4D3C2Cu;
    // 0x4d3c2c: 0x1a0000c1  blez        $s0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x4D3C2Cu;
    {
        const bool branch_taken_0x4d3c2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4D3C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3C2Cu;
        // 0x4d3c30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3c2c) {
            ctx->pc = 0x4D3F34u;
            goto label_4d3f34;
        }
    }
    ctx->pc = 0x4D3C34u;
    // 0x4d3c34: 0x0  nop
    ctx->pc = 0x4d3c34u;
    // NOP
label_4d3c38:
    // 0x4d3c38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d3c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3c3c: 0xbc080  sll         $t8, $t3, 2
    ctx->pc = 0x4d3c3cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4d3c40: 0xbc840  sll         $t9, $t3, 1
    ctx->pc = 0x4d3c40u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4d3c44: 0x1960004c  blez        $t3, . + 4 + (0x4C << 2)
    ctx->pc = 0x4D3C44u;
    {
        const bool branch_taken_0x4d3c44 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4D3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3C44u;
        // 0x4d3c48: 0x25710001  addiu       $s1, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3c44) {
            ctx->pc = 0x4D3D78u;
            goto label_4d3d78;
        }
    }
    ctx->pc = 0x4D3C4Cu;
    // 0x4d3c4c: 0x30f1021  addu        $v0, $t8, $t7
    ctx->pc = 0x4d3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x4d3c50: 0x320982d  daddu       $s3, $t9, $zero
    ctx->pc = 0x4d3c50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3c54: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4d3c54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3c58: 0xc7040  sll         $t6, $t4, 1
    ctx->pc = 0x4d3c58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x4d3c5c: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x4d3c5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_4d3c60:
    // 0x4d3c60: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4d3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d3c64: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x4d3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x4d3c68: 0x524021  addu        $t0, $v0, $s2
    ctx->pc = 0x4d3c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4d3c6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d3c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d3c70: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x4d3c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4d3c74: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3c78: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3c7c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4d3c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3c80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3c84: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3c88: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3c8c: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x4d3c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x4d3c90: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x4d3c90u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3c94: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3c98: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x4d3c98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3c9c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4d3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3ca0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3ca4: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d3ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3ca8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d3ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3cac: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4d3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3cb0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3cb4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d3cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d3cb8: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x4d3cb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3cbc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d3cc0: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x4d3cc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3cc4: 0xec3823  subu        $a3, $a3, $t4
    ctx->pc = 0x4d3cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d3cc8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x4d3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3ccc: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d3cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3cd0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d3cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3cd4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4d3cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3cd8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d3cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3cdc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x4d3cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4d3ce0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3ce0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3ce4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d3ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3ce8: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x4d3ce8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3cec: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3cf0: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x4d3cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d3cf4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3cf8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d3cfc: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x4d3cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x4d3d00: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x4d3d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d3d04: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3d08: 0xe4a40000  swc1        $f4, 0x0($a1)
    ctx->pc = 0x4d3d08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x4d3d0c: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d3d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3d10: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x4d3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3d14: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d3d18: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x4d3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3d1c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3d20: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3d24: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3d28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3d28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3d2c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4d3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3d30: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x4d3d30u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3d34: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x4d3d34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x4d3d38: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3d3c: 0x12b282a  slt         $a1, $t1, $t3
    ctx->pc = 0x4d3d3cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4d3d40: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3d44: 0xe4c30004  swc1        $f3, 0x4($a2)
    ctx->pc = 0x4d3d44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4d3d48: 0xe4c40000  swc1        $f4, 0x0($a2)
    ctx->pc = 0x4d3d48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4d3d4c: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4d3d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3d50: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3d54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d3d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3d58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3d58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3d5c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4d3d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3d60: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x4d3d60u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3d64: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3d68: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3d6c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x4d3d6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d3d70: 0x14a0ffbb  bnez        $a1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x4D3D70u;
    {
        const bool branch_taken_0x4d3d70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3D70u;
        // 0x4d3d74: 0xe4840000  swc1        $f4, 0x0($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3d70) {
            ctx->pc = 0x4D3C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3c60;
        }
    }
    ctx->pc = 0x4D3D78u;
label_4d3d78:
    // 0x4d3d78: 0x30f1021  addu        $v0, $t8, $t7
    ctx->pc = 0x4d3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x4d3d7c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x4d3d7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4d3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3d84: 0x170302a  slt         $a2, $t3, $s0
    ctx->pc = 0x4d3d84u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d3d88: 0x3233821  addu        $a3, $t9, $v1
    ctx->pc = 0x4d3d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x4d3d8c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3d90: 0xec4021  addu        $t0, $a3, $t4
    ctx->pc = 0x4d3d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d3d94: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d3d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d3d98: 0x10c3821  addu        $a3, $t0, $t4
    ctx->pc = 0x4d3d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3d9c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3da0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4d3da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3da4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3da8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3dac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3dacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3db0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3db4: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d3db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d3db8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3dbc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x4d3dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d3dc0: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d3dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d3dc4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3dc8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d3dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3dcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3dccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3dd0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3dd4: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x4d3dd4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3dd8: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4d3dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3ddc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3de0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3de4: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x4d3de4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3de8: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x4d3de8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3dec: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d3decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3df0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3df0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3df4: 0x14c0ff90  bnez        $a2, . + 4 + (-0x70 << 2)
    ctx->pc = 0x4D3DF4u;
    {
        const bool branch_taken_0x4d3df4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3DF4u;
        // 0x4d3df8: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3df4) {
            ctx->pc = 0x4D3C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3c38;
        }
    }
    ctx->pc = 0x4D3DFCu;
    // 0x4d3dfc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x4D3DFCu;
    {
        const bool branch_taken_0x4d3dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3DFCu;
        // 0x4d3e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3dfc) {
            ctx->pc = 0x4D3F38u;
            goto label_4d3f38;
        }
    }
    ctx->pc = 0x4D3E04u;
label_4d3e04:
    // 0x4d3e04: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x4d3e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3e08: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3e0c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x4d3e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d3e10: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4d3e10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3e14: 0x170182a  slt         $v1, $t3, $s0
    ctx->pc = 0x4d3e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d3e18: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x4d3e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x4d3e1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3e20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3e20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3e24: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x4D3E24u;
    {
        const bool branch_taken_0x4d3e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3E24u;
        // 0x4d3e28: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3e24) {
            ctx->pc = 0x4D3F34u;
            goto label_4d3f34;
        }
    }
    ctx->pc = 0x4D3E2Cu;
    // 0x4d3e2c: 0x0  nop
    ctx->pc = 0x4d3e2cu;
    // NOP
label_4d3e30:
    // 0x4d3e30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d3e30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3e34: 0xbc080  sll         $t8, $t3, 2
    ctx->pc = 0x4d3e34u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4d3e38: 0xbc840  sll         $t9, $t3, 1
    ctx->pc = 0x4d3e38u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4d3e3c: 0x1960002c  blez        $t3, . + 4 + (0x2C << 2)
    ctx->pc = 0x4D3E3Cu;
    {
        const bool branch_taken_0x4d3e3c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x4D3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3E3Cu;
        // 0x4d3e40: 0x25710001  addiu       $s1, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3e3c) {
            ctx->pc = 0x4D3EF0u;
            goto label_4d3ef0;
        }
    }
    ctx->pc = 0x4D3E44u;
    // 0x4d3e44: 0x30f1021  addu        $v0, $t8, $t7
    ctx->pc = 0x4d3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x4d3e48: 0x320702d  daddu       $t6, $t9, $zero
    ctx->pc = 0x4d3e48u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3e4c: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x4d3e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3e50: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x4d3e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3e54: 0x0  nop
    ctx->pc = 0x4d3e54u;
    // NOP
label_4d3e58:
    // 0x4d3e58: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4d3e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d3e5c: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x4d3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x4d3e60: 0x4d4021  addu        $t0, $v0, $t5
    ctx->pc = 0x4d3e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4d3e64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4d3e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4d3e68: 0x1c43821  addu        $a3, $t6, $a0
    ctx->pc = 0x4d3e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x4d3e6c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4d3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3e70: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3e74: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4d3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3e78: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3e7c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4d3e80: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x4d3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3e84: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d3e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d3e88: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x4d3e88u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3e8c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x4d3e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3e90: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x4d3e90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3e94: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x4d3e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3e98: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x4d3e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4d3e9c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4d3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3ea0: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x4d3ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x4d3ea4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4d3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4d3ea8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x4d3ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3eac: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d3eb0: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x4d3eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x4d3eb4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3eb8: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x4d3eb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4d3ebc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4d3ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4d3ec0: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4d3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4d3ec4: 0x12b182a  slt         $v1, $t1, $t3
    ctx->pc = 0x4d3ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x4d3ec8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4d3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3ecc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4d3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3ed0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3ed0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3ed4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x4d3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d3ed8: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x4d3ed8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3edc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x4d3edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4d3ee0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4d3ee4: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x4d3ee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x4d3ee8: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4D3EE8u;
    {
        const bool branch_taken_0x4d3ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3EE8u;
        // 0x4d3eec: 0xe4a40000  swc1        $f4, 0x0($a1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3ee8) {
            ctx->pc = 0x4D3E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3e58;
        }
    }
    ctx->pc = 0x4D3EF0u;
label_4d3ef0:
    // 0x4d3ef0: 0x30f1021  addu        $v0, $t8, $t7
    ctx->pc = 0x4d3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 15)));
    // 0x4d3ef4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x4d3ef4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d3ef8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d3ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4d3efc: 0x170282a  slt         $a1, $t3, $s0
    ctx->pc = 0x4d3efcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d3f00: 0x3243821  addu        $a3, $t9, $a0
    ctx->pc = 0x4d3f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 4)));
    // 0x4d3f04: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4d3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d3f08: 0xec1021  addu        $v0, $a3, $t4
    ctx->pc = 0x4d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d3f0c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x4d3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x4d3f10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d3f14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d3f18: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4d3f1c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4d3f1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4d3f20: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x4d3f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x4d3f24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4d3f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d3f28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4d3f28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4d3f2c: 0x14a0ffc0  bnez        $a1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x4D3F2Cu;
    {
        const bool branch_taken_0x4d3f2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3F2Cu;
        // 0x4d3f30: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d3f2c) {
            ctx->pc = 0x4D3E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d3e30;
        }
    }
    ctx->pc = 0x4D3F34u;
label_4d3f34:
    // 0x4d3f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d3f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d3f38:
    // 0x4d3f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d3f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d3f3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d3f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d3f40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d3f40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d3f44: 0x3e00008  jr          $ra
    ctx->pc = 0x4D3F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D3F44u;
        // 0x4d3f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D3F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D3F4Cu;
    // 0x4d3f4c: 0x0  nop
    ctx->pc = 0x4d3f4cu;
    // NOP
    ctx->pc = 0x4d3f50u;
}
