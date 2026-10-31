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

// Function: sub_003A4E88
// Address: 0x3a4e88 - 0x3a4f78
void sub_003A4E88_0x3a4e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4E88_0x3a4e88");
#endif

    switch (ctx->pc) {
        case 0x3a4ee0u: goto label_3a4ee0;
        case 0x3a4f3cu: goto label_3a4f3c;
        case 0x3a4f4cu: goto label_3a4f4c;
        default: break;
    }

    ctx->pc = 0x3a4e88u;

    // 0x3a4e88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a4e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3a4e8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4e90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a4e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3a4e94: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3a4e98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3a4e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4e9c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3a4ea0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a4ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ea4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3a4ea8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3a4ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a4eac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a4eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a4eb0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a4eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4eb4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3a4eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3a4eb8: 0x2454cd4c  addiu       $s4, $v0, -0x32B4
    ctx->pc = 0x3a4eb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954316));
    // 0x3a4ebc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3a4ebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3a4ec0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3a4ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a4ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a4ec8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a4ec8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a4ecc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a4eccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a4ed0: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3a4ed0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3a4ed4: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x3a4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    // 0x3a4ed8: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x3A4ED8u;
    SET_GPR_U32(ctx, 31, 0x3A4EE0u);
    ctx->pc = 0x3A4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4ED8u;
    // 0x3a4edc: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x3A4ED8u, 0x3A4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4EE0u;
label_3a4ee0:
    // 0x3a4ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a4ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ee4: 0x101ac3  sra         $v1, $s0, 11
    ctx->pc = 0x3a4ee4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 11));
    // 0x3a4ee8: 0x101203  sra         $v0, $s0, 8
    ctx->pc = 0x3a4ee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
    // 0x3a4eec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a4eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a4ef0: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x3a4ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a4ef4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3a4ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3a4ef8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4EF8u;
    {
        const bool branch_taken_0x3a4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EF8u;
        // 0x3a4efc: 0x30680001  andi        $t0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ef8) {
            ctx->pc = 0x3A4F0Cu;
            goto label_3a4f0c;
        }
    }
    ctx->pc = 0x3A4F00u;
    // 0x3a4f00: 0x104cc3  sra         $t1, $s0, 19
    ctx->pc = 0x3a4f00u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 16), 19));
    // 0x3a4f04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4F04u;
    {
        const bool branch_taken_0x3a4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F04u;
        // 0x3a4f08: 0x31290001  andi        $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f04) {
            ctx->pc = 0x3A4F10u;
            goto label_3a4f10;
        }
    }
    ctx->pc = 0x3A4F0Cu;
label_3a4f0c:
    // 0x3a4f0c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3a4f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a4f10:
    // 0x3a4f10: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x3a4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x3a4f14: 0x32030100  andi        $v1, $s0, 0x100
    ctx->pc = 0x3a4f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
    // 0x3a4f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4f1c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3a4f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a4f20: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3a4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3a4f24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a4f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f28: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3a4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3a4f2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a4f2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a4f30: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x3a4f30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f34: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x3A4F34u;
    SET_GPR_U32(ctx, 31, 0x3A4F3Cu);
    ctx->pc = 0x3A4F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F34u;
    // 0x3a4f38: 0x43500a  movz        $t2, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x3A4F34u, 0x3A4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F3Cu;
label_3a4f3c:
    // 0x3a4f3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a4f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4f40: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x3a4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
    // 0x3a4f44: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x3A4F44u;
    SET_GPR_U32(ctx, 31, 0x3A4F4Cu);
    ctx->pc = 0x3A4F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F44u;
    // 0x3a4f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x3A4F44u, 0x3A4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F4Cu;
label_3a4f4c:
    // 0x3a4f4c: 0x101400  sll         $v0, $s0, 16
    ctx->pc = 0x3a4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3a4f50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a4f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a4f54: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a4f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a4f58: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a4f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a4f5c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a4f5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a4f60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a4f60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4f64: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3a4f64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a4f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4f6c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3a4f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a4f70: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F70u;
        // 0x3a4f74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4F78u;
}
