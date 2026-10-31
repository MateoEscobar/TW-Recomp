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

// Function: sub_00315FC8
// Address: 0x315fc8 - 0x3160a8
void sub_00315FC8_0x315fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315FC8_0x315fc8");
#endif

    switch (ctx->pc) {
        case 0x31601cu: goto label_31601c;
        case 0x316030u: goto label_316030;
        case 0x316068u: goto label_316068;
        case 0x316074u: goto label_316074;
        default: break;
    }

    ctx->pc = 0x315fc8u;

    // 0x315fc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x315fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x315fcc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x315fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x315fd0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x315fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x315fd4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x315fd4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x315fd8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x315fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x315fdc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x315fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315fe0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x315fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x315fe4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x315fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315fe8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x315fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x315fec: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x315fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ff0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x315ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x315ff4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x315ff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ff8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x315ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x315ffc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x315ffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316000: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x316000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x316004: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x316004u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316008: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x316008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31600c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x316010: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x316010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x316014: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316014u;
    SET_GPR_U32(ctx, 31, 0x31601Cu);
    ctx->pc = 0x316018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316014u;
    // 0x316018: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316014u, 0x31601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31601Cu;
label_31601c:
    // 0x31601c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31601cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316020: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x316020u;
    {
        const bool branch_taken_0x316020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316020u;
        // 0x316024: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316020) {
            ctx->pc = 0x316078u;
            goto label_316078;
        }
    }
    ctx->pc = 0x316028u;
    // 0x316028: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316028u;
    SET_GPR_U32(ctx, 31, 0x316030u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316028u, 0x316030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316030u;
label_316030:
    // 0x316030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316034: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x316034u;
    {
        const bool branch_taken_0x316034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316034u;
        // 0x316038: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316034) {
            ctx->pc = 0x316068u;
            goto label_316068;
        }
    }
    ctx->pc = 0x31603Cu;
    // 0x31603c: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x31603cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x316040: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x316040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x316044: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316044u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316048: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x316048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31604c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31604cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316050: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x316050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316054: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x316054u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31605c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31605cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316060: 0xc0c46b6  jal         func_311AD8
    ctx->pc = 0x316060u;
    SET_GPR_U32(ctx, 31, 0x316068u);
    ctx->pc = 0x316064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316060u;
    // 0x316064: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x311AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311AD8u, 0x316060u, 0x316068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316068u;
label_316068:
    // 0x316068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31606c: 0xc059590  jal         func_165640
    ctx->pc = 0x31606Cu;
    SET_GPR_U32(ctx, 31, 0x316074u);
    ctx->pc = 0x316070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31606Cu;
    // 0x316070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x31606Cu, 0x316074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316074u;
label_316074:
    // 0x316074: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x316074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_316078:
    // 0x316078: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x316078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31607c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31607cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316080: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x316080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316084: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x316084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316088: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x316088u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31608c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31608cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316090: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x316090u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x316094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316098: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x316098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31609c: 0x3e00008  jr          $ra
    ctx->pc = 0x31609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31609Cu;
        // 0x3160a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3160A4u;
    // 0x3160a4: 0x0  nop
    ctx->pc = 0x3160a4u;
    // NOP
    ctx->pc = 0x3160a8u;
}
