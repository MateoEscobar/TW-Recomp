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

// Function: sub_00116EC0
// Address: 0x116ec0 - 0x116fe8
void sub_00116EC0_0x116ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116EC0_0x116ec0");
#endif

    switch (ctx->pc) {
        case 0x116f18u: goto label_116f18;
        case 0x116f44u: goto label_116f44;
        case 0x116f64u: goto label_116f64;
        case 0x116f80u: goto label_116f80;
        case 0x116fa0u: goto label_116fa0;
        default: break;
    }

    ctx->pc = 0x116ec0u;

    // 0x116ec0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x116ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x116ec4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x116ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x116ec8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x116ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x116ecc: 0x34423f28  ori         $v0, $v0, 0x3F28
    ctx->pc = 0x116eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16168);
    // 0x116ed0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x116ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x116ed4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x116ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x116ed8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x116ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x116edc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x116edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ee0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x116ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x116ee4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x116ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x116ee8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x116ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x116eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ef0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x116ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x116ef4: 0x3c070055  lui         $a3, 0x55
    ctx->pc = 0x116ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)85 << 16));
    // 0x116ef8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x116ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x116efc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116f00: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x116f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x116f04: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x116f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x116f08: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x116f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x116f0c: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x116f0cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
    // 0x116f10: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x116f10u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x116f14: 0x0  nop
    ctx->pc = 0x116f14u;
    // NOP
label_116f18:
    // 0x116f18: 0x8e22fff8  lw          $v0, -0x8($s1)
    ctx->pc = 0x116f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
    // 0x116f1c: 0x16420022  bne         $s2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x116F1Cu;
    {
        const bool branch_taken_0x116f1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x116F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F1Cu;
        // 0x116f20: 0x92230004  lbu         $v1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f1c) {
            ctx->pc = 0x116FA8u;
            goto label_116fa8;
        }
    }
    ctx->pc = 0x116F24u;
    // 0x116f24: 0x54c30021  bnel        $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x116F24u;
    {
        const bool branch_taken_0x116f24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x116f24) {
            ctx->pc = 0x116F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F24u;
            // 0x116f28: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116FACu;
            goto label_116fac;
        }
    }
    ctx->pc = 0x116F2Cu;
    // 0x116f2c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x116F2Cu;
    {
        const bool branch_taken_0x116f2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x116F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F2Cu;
        // 0x116f30: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f2c) {
            ctx->pc = 0x116F4Cu;
            goto label_116f4c;
        }
    }
    ctx->pc = 0x116F34u;
    // 0x116f34: 0x24e581f0  addiu       $a1, $a3, -0x7E10
    ctx->pc = 0x116f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935024));
    // 0x116f38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f3c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x116F3Cu;
    SET_GPR_U32(ctx, 31, 0x116F44u);
    ctx->pc = 0x116F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F3Cu;
    // 0x116f40: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x116F3Cu, 0x116F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F44u;
label_116f44:
    // 0x116f44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116F44u;
    {
        const bool branch_taken_0x116f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F44u;
        // 0x116f48: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f44) {
            ctx->pc = 0x116F68u;
            goto label_116f68;
        }
    }
    ctx->pc = 0x116F4Cu;
label_116f4c:
    // 0x116f4c: 0x14d40006  bne         $a2, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x116F4Cu;
    {
        const bool branch_taken_0x116f4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        ctx->pc = 0x116F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F4Cu;
        // 0x116f50: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f4c) {
            ctx->pc = 0x116F68u;
            goto label_116f68;
        }
    }
    ctx->pc = 0x116F54u;
    // 0x116f54: 0x24a581f8  addiu       $a1, $a1, -0x7E08
    ctx->pc = 0x116f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935032));
    // 0x116f58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f5c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x116F5Cu;
    SET_GPR_U32(ctx, 31, 0x116F64u);
    ctx->pc = 0x116F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F5Cu;
    // 0x116f60: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x116F5Cu, 0x116F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F64u;
label_116f64:
    // 0x116f64: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x116f64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116f68:
    // 0x116f68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x116f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f6c: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x116f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x116f70: 0x26a68240  addiu       $a2, $s5, -0x7DC0
    ctx->pc = 0x116f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294935104));
    // 0x116f74: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x116f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f78: 0xc10ca04  jal         func_432810
    ctx->pc = 0x116F78u;
    SET_GPR_U32(ctx, 31, 0x116F80u);
    ctx->pc = 0x116F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F78u;
    // 0x116f7c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x116F78u, 0x116F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116F80u;
label_116f80:
    // 0x116f80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x116f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x116f84: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x116f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x116f88: 0x26c491e0  addiu       $a0, $s6, -0x6E20
    ctx->pc = 0x116f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939104));
    // 0x116f8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x116f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116f90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x116f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x116f94: 0x282800b  movn        $s0, $s4, $v0
    ctx->pc = 0x116f94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x116f98: 0xc050fda  jal         func_143F68
    ctx->pc = 0x116F98u;
    SET_GPR_U32(ctx, 31, 0x116FA0u);
    ctx->pc = 0x116F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116F98u;
    // 0x116f9c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x116F98u, 0x116FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116FA0u;
label_116fa0:
    // 0x116fa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116FA0u;
    {
        const bool branch_taken_0x116fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FA0u;
        // 0x116fa4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fa0) {
            ctx->pc = 0x116FC0u;
            goto label_116fc0;
        }
    }
    ctx->pc = 0x116FA8u;
label_116fa8:
    // 0x116fa8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_116fac:
    // 0x116fac: 0x28820015  slti        $v0, $a0, 0x15
    ctx->pc = 0x116facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x116fb0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x116FB0u;
    {
        const bool branch_taken_0x116fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FB0u;
        // 0x116fb4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116fb0) {
            ctx->pc = 0x116F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116f18;
        }
    }
    ctx->pc = 0x116FB8u;
    // 0x116fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116fbc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x116fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_116fc0:
    // 0x116fc0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x116fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x116fc4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x116fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x116fc8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x116fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116fcc: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x116fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116fd0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x116fd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116fd4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x116fd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116fd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x116fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x116FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116FDCu;
        // 0x116fe0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116FE4u;
    // 0x116fe4: 0x0  nop
    ctx->pc = 0x116fe4u;
    // NOP
    ctx->pc = 0x116fe8u;
}
