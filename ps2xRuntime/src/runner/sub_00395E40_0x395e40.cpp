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

// Function: sub_00395E40
// Address: 0x395e40 - 0x395f00
void sub_00395E40_0x395e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395E40_0x395e40");
#endif

    switch (ctx->pc) {
        case 0x395e8cu: goto label_395e8c;
        case 0x395ee8u: goto label_395ee8;
        default: break;
    }

    ctx->pc = 0x395e40u;

    // 0x395e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395e44: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x395e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x395e48: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x395E48u;
    {
        const bool branch_taken_0x395e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x395E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E48u;
        // 0x395e4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e48) {
            ctx->pc = 0x395ECCu;
            goto label_395ecc;
        }
    }
    ctx->pc = 0x395E50u;
    // 0x395e50: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x395e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x395e54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395E54u;
    {
        const bool branch_taken_0x395e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E54u;
        // 0x395e58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e54) {
            ctx->pc = 0x395E6Cu;
            goto label_395e6c;
        }
    }
    ctx->pc = 0x395E5Cu;
    // 0x395e5c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x395E5Cu;
    {
        const bool branch_taken_0x395e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x395E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E5Cu;
        // 0x395e60: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e5c) {
            ctx->pc = 0x395E80u;
            goto label_395e80;
        }
    }
    ctx->pc = 0x395E64u;
    // 0x395e64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x395E64u;
    {
        const bool branch_taken_0x395e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395e64) {
            ctx->pc = 0x395EF0u;
            goto label_395ef0;
        }
    }
    ctx->pc = 0x395E6Cu;
label_395e6c:
    // 0x395e6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x395e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x395e70: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x395E70u;
    {
        const bool branch_taken_0x395e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x395E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E70u;
        // 0x395e74: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e70) {
            ctx->pc = 0x395EDCu;
            goto label_395edc;
        }
    }
    ctx->pc = 0x395E78u;
    // 0x395e78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x395E78u;
    {
        const bool branch_taken_0x395e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395e78) {
            ctx->pc = 0x395EF0u;
            goto label_395ef0;
        }
    }
    ctx->pc = 0x395E80u;
label_395e80:
    // 0x395e80: 0x94850112  lhu         $a1, 0x112($a0)
    ctx->pc = 0x395e80u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x395e84: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x395E84u;
    SET_GPR_U32(ctx, 31, 0x395E8Cu);
    ctx->pc = 0x395E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395E84u;
    // 0x395e88: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x395E84u, 0x395E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395E8Cu;
label_395e8c:
    // 0x395e8c: 0x94420062  lhu         $v0, 0x62($v0)
    ctx->pc = 0x395e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x395e90: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x395E90u;
    {
        const bool branch_taken_0x395e90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x395E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E90u;
        // 0x395e94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e90) {
            ctx->pc = 0x395EACu;
            goto label_395eac;
        }
    }
    ctx->pc = 0x395E98u;
    // 0x395e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x395e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395e9c: 0x0  nop
    ctx->pc = 0x395e9cu;
    // NOP
    // 0x395ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x395ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x395ea4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x395EA4u;
    {
        const bool branch_taken_0x395ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395ea4) {
            ctx->pc = 0x395EF8u;
            goto label_395ef8;
        }
    }
    ctx->pc = 0x395EACu;
label_395eac:
    // 0x395eac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x395eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x395eb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x395eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x395eb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x395eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x395eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x395eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395ebc: 0x0  nop
    ctx->pc = 0x395ebcu;
    // NOP
    // 0x395ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x395ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x395ec4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x395EC4u;
    {
        const bool branch_taken_0x395ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EC4u;
        // 0x395ec8: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ec4) {
            ctx->pc = 0x395EF4u;
            goto label_395ef4;
        }
    }
    ctx->pc = 0x395ECCu;
label_395ecc:
    // 0x395ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x395eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x395ed0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x395ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x395ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395ED4u;
    {
        const bool branch_taken_0x395ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ED4u;
        // 0x395ed8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ed4) {
            ctx->pc = 0x395EF8u;
            goto label_395ef8;
        }
    }
    ctx->pc = 0x395EDCu;
label_395edc:
    // 0x395edc: 0x94850112  lhu         $a1, 0x112($a0)
    ctx->pc = 0x395edcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x395ee0: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x395EE0u;
    SET_GPR_U32(ctx, 31, 0x395EE8u);
    ctx->pc = 0x395EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395EE0u;
    // 0x395ee4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x395EE0u, 0x395EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395EE8u;
label_395ee8:
    // 0x395ee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x395EE8u;
    {
        const bool branch_taken_0x395ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE8u;
        // 0x395eec: 0xc4400088  lwc1        $f0, 0x88($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ee8) {
            ctx->pc = 0x395EF4u;
            goto label_395ef4;
        }
    }
    ctx->pc = 0x395EF0u;
label_395ef0:
    // 0x395ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x395ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_395ef4:
    // 0x395ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395ef8:
    // 0x395ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x395EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EF8u;
        // 0x395efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395F00u;
}
