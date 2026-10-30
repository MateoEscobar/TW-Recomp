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

// Function: sub_00181FB0
// Address: 0x181fb0 - 0x1820e0
void sub_00181FB0_0x181fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181FB0_0x181fb0");
#endif

    switch (ctx->pc) {
        case 0x182004u: goto label_182004;
        case 0x182048u: goto label_182048;
        case 0x182054u: goto label_182054;
        case 0x182074u: goto label_182074;
        case 0x182084u: goto label_182084;
        case 0x182094u: goto label_182094;
        default: break;
    }

    ctx->pc = 0x181fb0u;

    // 0x181fb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x181fb4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x181fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x181fb8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x181fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x181fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fc0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x181fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x181fc4: 0x26320060  addiu       $s2, $s1, 0x60
    ctx->pc = 0x181fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x181fc8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x181fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x181fcc: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x181fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x181fd0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x181fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x181fd4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x181fd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fd8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x181fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x181fdc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x181fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fe0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x181fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x181fe4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x181fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fe8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x181fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x181fec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x181fecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ff0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x181ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x181ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x181ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ff8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x181ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ffc: 0xc137cca  jal         func_4DF328
    ctx->pc = 0x181FFCu;
    SET_GPR_U32(ctx, 31, 0x182004u);
    ctx->pc = 0x182000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181FFCu;
    // 0x182000: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF328u, 0x181FFCu, 0x182004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182004u;
label_182004:
    // 0x182004: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x182004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x182008: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x182008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18200c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18200Cu;
    {
        const bool branch_taken_0x18200c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18200Cu;
        // 0x182010: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18200c) {
            ctx->pc = 0x182024u;
            goto label_182024;
        }
    }
    ctx->pc = 0x182014u;
    // 0x182014: 0x52800027  beql        $s4, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x182014u;
    {
        const bool branch_taken_0x182014 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x182014) {
            ctx->pc = 0x182018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182014u;
            // 0x182018: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1820B4u;
            goto label_1820b4;
        }
    }
    ctx->pc = 0x18201Cu;
    // 0x18201c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18201Cu;
    {
        const bool branch_taken_0x18201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18201Cu;
        // 0x182020: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18201c) {
            ctx->pc = 0x1820A4u;
            goto label_1820a4;
        }
    }
    ctx->pc = 0x182024u;
label_182024:
    // 0x182024: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x182024u;
    {
        const bool branch_taken_0x182024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x182028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182024u;
        // 0x182028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182024) {
            ctx->pc = 0x1820B8u;
            goto label_1820b8;
        }
    }
    ctx->pc = 0x18202Cu;
    // 0x18202c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x18202cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x182030: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x182034: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x182034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18203c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x18203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x182040: 0xc10ca04  jal         func_432810
    ctx->pc = 0x182040u;
    SET_GPR_U32(ctx, 31, 0x182048u);
    ctx->pc = 0x182044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182040u;
    // 0x182044: 0x24c62710  addiu       $a2, $a2, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x182040u, 0x182048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182048u;
label_182048:
    // 0x182048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18204c: 0xc061668  jal         func_1859A0
    ctx->pc = 0x18204Cu;
    SET_GPR_U32(ctx, 31, 0x182054u);
    ctx->pc = 0x182050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18204Cu;
    // 0x182050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x18204Cu, 0x182054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182054u;
label_182054:
    // 0x182054: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x182054u;
    {
        const bool branch_taken_0x182054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182054u;
        // 0x182058: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182054) {
            ctx->pc = 0x182078u;
            goto label_182078;
        }
    }
    ctx->pc = 0x18205Cu;
    // 0x18205c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x182060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182064: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x182064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182068: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x182068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18206c: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x18206Cu;
    SET_GPR_U32(ctx, 31, 0x182074u);
    ctx->pc = 0x182070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18206Cu;
    // 0x182070: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x18206Cu, 0x182074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182074u;
label_182074:
    // 0x182074: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_182078:
    // 0x182078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18207c: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x18207Cu;
    SET_GPR_U32(ctx, 31, 0x182084u);
    ctx->pc = 0x182080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18207Cu;
    // 0x182080: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x18207Cu, 0x182084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182084u;
label_182084:
    // 0x182084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x182084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182088: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x182088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18208c: 0xc137cca  jal         func_4DF328
    ctx->pc = 0x18208Cu;
    SET_GPR_U32(ctx, 31, 0x182094u);
    ctx->pc = 0x182090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18208Cu;
    // 0x182090: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF328u, 0x18208Cu, 0x182094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182094u;
label_182094:
    // 0x182094: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x182094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182098: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x182098u;
    {
        const bool branch_taken_0x182098 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182098u;
        // 0x18209c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182098) {
            ctx->pc = 0x1820B0u;
            goto label_1820b0;
        }
    }
    ctx->pc = 0x1820A0u;
    // 0x1820a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1820a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1820a4:
    // 0x1820a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1820a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1820a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1820a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1820ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1820acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1820b0:
    // 0x1820b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1820b4:
    // 0x1820b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1820b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1820b8:
    // 0x1820b8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1820b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1820bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1820bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1820c0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1820c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1820c4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1820c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1820c8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1820c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1820cc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1820ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1820d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1820d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1820d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1820d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1820d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1820D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1820DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820D8u;
        // 0x1820dc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1820D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1820E0u;
}
