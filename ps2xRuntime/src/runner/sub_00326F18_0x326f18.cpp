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

// Function: sub_00326F18
// Address: 0x326f18 - 0x327030
void sub_00326F18_0x326f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F18_0x326f18");
#endif

    switch (ctx->pc) {
        case 0x326f68u: goto label_326f68;
        case 0x326fa4u: goto label_326fa4;
        case 0x326fbcu: goto label_326fbc;
        case 0x326fe4u: goto label_326fe4;
        case 0x326fecu: goto label_326fec;
        case 0x326ffcu: goto label_326ffc;
        default: break;
    }

    ctx->pc = 0x326f18u;

    // 0x326f18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x326f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x326f1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x326f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x326f20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x326f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x326f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f28: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x326f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x326f2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x326f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x326f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x326f34: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x326f34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f38: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x326f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x326f3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x326f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x326f40: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x326f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x326f44: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x326F44u;
    {
        const bool branch_taken_0x326f44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x326F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F44u;
        // 0x326f48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f44) {
            ctx->pc = 0x326F58u;
            goto label_326f58;
        }
    }
    ctx->pc = 0x326F4Cu;
    // 0x326f4c: 0x24b30008  addiu       $s3, $a1, 0x8
    ctx->pc = 0x326f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x326f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x326F50u;
    {
        const bool branch_taken_0x326f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F50u;
        // 0x326f54: 0x24b60004  addiu       $s6, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f50) {
            ctx->pc = 0x326F60u;
            goto label_326f60;
        }
    }
    ctx->pc = 0x326F58u;
label_326f58:
    // 0x326f58: 0x24b30004  addiu       $s3, $a1, 0x4
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x326f5c: 0x24b60008  addiu       $s6, $a1, 0x8
    ctx->pc = 0x326f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_326f60:
    // 0x326f60: 0xc0c9ad6  jal         func_326B58
    ctx->pc = 0x326F60u;
    SET_GPR_U32(ctx, 31, 0x326F68u);
    ctx->pc = 0x326F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F60u;
    // 0x326f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B58u, 0x326F60u, 0x326F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F68u;
label_326f68:
    // 0x326f68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x326f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x326f6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326f70: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326f74: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x326f78: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x326f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x326f7c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x326f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326f80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x326f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326f84: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x326f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x326f88: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x326f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x326f8c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x326f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x326f90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326F90u;
    {
        const bool branch_taken_0x326f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F90u;
        // 0x326f94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f90) {
            ctx->pc = 0x326FACu;
            goto label_326fac;
        }
    }
    ctx->pc = 0x326F98u;
    // 0x326f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f9c: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326F9Cu;
    SET_GPR_U32(ctx, 31, 0x326FA4u);
    ctx->pc = 0x326FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F9Cu;
    // 0x326fa0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326F9Cu, 0x326FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FA4u;
label_326fa4:
    // 0x326fa4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326FA4u;
    {
        const bool branch_taken_0x326fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FA4u;
        // 0x326fa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fa4) {
            ctx->pc = 0x326FD4u;
            goto label_326fd4;
        }
    }
    ctx->pc = 0x326FACu;
label_326fac:
    // 0x326fac: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x326FACu;
    {
        const bool branch_taken_0x326fac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FACu;
        // 0x326fb0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fac) {
            ctx->pc = 0x326FD8u;
            goto label_326fd8;
        }
    }
    ctx->pc = 0x326FB4u;
    // 0x326fb4: 0xc0c9b0e  jal         func_326C38
    ctx->pc = 0x326FB4u;
    SET_GPR_U32(ctx, 31, 0x326FBCu);
    ctx->pc = 0x326C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326C38u, 0x326FB4u, 0x326FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FBCu;
label_326fbc:
    // 0x326fbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x326fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326fc0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x326fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x326fc4: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x326fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x326fc8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x326fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x326fcc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x326fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x326fd0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x326fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_326fd4:
    // 0x326fd4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x326fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_326fd8:
    // 0x326fd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x326fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326fdc: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x326FDCu;
    SET_GPR_U32(ctx, 31, 0x326FE4u);
    ctx->pc = 0x326FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FDCu;
    // 0x326fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x326FDCu, 0x326FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FE4u;
label_326fe4:
    // 0x326fe4: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x326FE4u;
    SET_GPR_U32(ctx, 31, 0x326FECu);
    ctx->pc = 0x326FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FE4u;
    // 0x326fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x326FE4u, 0x326FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FECu;
label_326fec:
    // 0x326fec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x326fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x326ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ff4: 0xc0c9b72  jal         func_326DC8
    ctx->pc = 0x326FF4u;
    SET_GPR_U32(ctx, 31, 0x326FFCu);
    ctx->pc = 0x326FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FF4u;
    // 0x326ff8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DC8u, 0x326FF4u, 0x326FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FFCu;
label_326ffc:
    // 0x326ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327000: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x327000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x327004: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x327004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x327008: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x327008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32700c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32700cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327010: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x327010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327014: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x327014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327018: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x327018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32701c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x32701cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327024: 0x3e00008  jr          $ra
    ctx->pc = 0x327024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327024u;
        // 0x327028: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32702Cu;
    // 0x32702c: 0x0  nop
    ctx->pc = 0x32702cu;
    // NOP
    ctx->pc = 0x327030u;
}
