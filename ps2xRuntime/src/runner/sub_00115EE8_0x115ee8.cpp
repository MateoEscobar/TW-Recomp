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

// Function: sub_00115EE8
// Address: 0x115ee8 - 0x116080
void sub_00115EE8_0x115ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115EE8_0x115ee8");
#endif

    switch (ctx->pc) {
        case 0x115f48u: goto label_115f48;
        case 0x115f6cu: goto label_115f6c;
        case 0x115f90u: goto label_115f90;
        case 0x115fa4u: goto label_115fa4;
        case 0x115fccu: goto label_115fcc;
        case 0x115ff4u: goto label_115ff4;
        case 0x116008u: goto label_116008;
        case 0x116030u: goto label_116030;
        case 0x116058u: goto label_116058;
        default: break;
    }

    ctx->pc = 0x115ee8u;

    // 0x115ee8: 0x240202fc  addiu       $v0, $zero, 0x2FC
    ctx->pc = 0x115ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
    // 0x115eec: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x115eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x115ef0: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x115ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x115ef4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x115ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x115ef8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x115ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x115efc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x115efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x115f00: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x115f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x115f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x115f08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x115f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x115f0c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x115f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x115f10: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x115f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x115f14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x115f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115f1c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x115f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x115f20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x115f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x115f24: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x115f24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x115f28: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x115f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f2c: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x115f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f30: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x115F30u;
    {
        const bool branch_taken_0x115f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F30u;
        // 0x115f34: 0x8c910038  lw          $s1, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f30) {
            ctx->pc = 0x115F90u;
            goto label_115f90;
        }
    }
    ctx->pc = 0x115F38u;
    // 0x115f38: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x115f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x115f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f40: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x115F40u;
    SET_GPR_U32(ctx, 31, 0x115F48u);
    ctx->pc = 0x115F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F40u;
    // 0x115f44: 0x24a57ca8  addiu       $a1, $a1, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x115F40u, 0x115F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F48u;
label_115f48:
    // 0x115f48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115F48u;
    {
        const bool branch_taken_0x115f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F48u;
        // 0x115f4c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f48) {
            ctx->pc = 0x115F60u;
            goto label_115f60;
        }
    }
    ctx->pc = 0x115F50u;
    // 0x115f50: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x115f54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x115f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x115f58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x115F58u;
    {
        const bool branch_taken_0x115f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F58u;
        // 0x115f5c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f58) {
            ctx->pc = 0x115F90u;
            goto label_115f90;
        }
    }
    ctx->pc = 0x115F60u;
label_115f60:
    // 0x115f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x115f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f64: 0xc050fda  jal         func_143F68
    ctx->pc = 0x115F64u;
    SET_GPR_U32(ctx, 31, 0x115F6Cu);
    ctx->pc = 0x115F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F64u;
    // 0x115f68: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x115F64u, 0x115F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F6Cu;
label_115f6c:
    // 0x115f6c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x115f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x115f70: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x115f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x115f74: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x115f78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x115f7c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x115f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x115f80: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x115f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x115f84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x115f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x115f88: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x115F88u;
    SET_GPR_U32(ctx, 31, 0x115F90u);
    ctx->pc = 0x115F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F88u;
    // 0x115f8c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x115F88u, 0x115F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F90u;
label_115f90:
    // 0x115f90: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x115F90u;
    {
        const bool branch_taken_0x115f90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F90u;
        // 0x115f94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f90) {
            ctx->pc = 0x115FF4u;
            goto label_115ff4;
        }
    }
    ctx->pc = 0x115F98u;
    // 0x115f98: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x115f9c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x115F9Cu;
    SET_GPR_U32(ctx, 31, 0x115FA4u);
    ctx->pc = 0x115FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F9Cu;
    // 0x115fa0: 0x24a57ca8  addiu       $a1, $a1, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x115F9Cu, 0x115FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FA4u;
label_115fa4:
    // 0x115fa4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115FA4u;
    {
        const bool branch_taken_0x115fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA4u;
        // 0x115fa8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fa4) {
            ctx->pc = 0x115FC0u;
            goto label_115fc0;
        }
    }
    ctx->pc = 0x115FACu;
    // 0x115fac: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x115facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x115fb0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x115fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x115fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115fb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115FB8u;
    {
        const bool branch_taken_0x115fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FB8u;
        // 0x115fbc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fb8) {
            ctx->pc = 0x115FF4u;
            goto label_115ff4;
        }
    }
    ctx->pc = 0x115FC0u;
label_115fc0:
    // 0x115fc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x115fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fc4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x115FC4u;
    SET_GPR_U32(ctx, 31, 0x115FCCu);
    ctx->pc = 0x115FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FC4u;
    // 0x115fc8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x115FC4u, 0x115FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FCCu;
label_115fcc:
    // 0x115fcc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x115fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x115fd0: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x115fd4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x115fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x115fd8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x115fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x115fdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x115fe0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x115fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x115fe4: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x115fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x115fe8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x115fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x115fec: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x115FECu;
    SET_GPR_U32(ctx, 31, 0x115FF4u);
    ctx->pc = 0x115FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FECu;
    // 0x115ff0: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x115FECu, 0x115FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FF4u;
label_115ff4:
    // 0x115ff4: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x115FF4u;
    {
        const bool branch_taken_0x115ff4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FF4u;
        // 0x115ff8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ff4) {
            ctx->pc = 0x116058u;
            goto label_116058;
        }
    }
    ctx->pc = 0x115FFCu;
    // 0x115ffc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x115ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x116000: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x116000u;
    SET_GPR_U32(ctx, 31, 0x116008u);
    ctx->pc = 0x116004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116000u;
    // 0x116004: 0x24a57ca8  addiu       $a1, $a1, 0x7CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x116000u, 0x116008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116008u;
label_116008:
    // 0x116008: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116008u;
    {
        const bool branch_taken_0x116008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116008u;
        // 0x11600c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116008) {
            ctx->pc = 0x116024u;
            goto label_116024;
        }
    }
    ctx->pc = 0x116010u;
    // 0x116010: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x116010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x116014: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x116014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x116018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11601c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11601Cu;
    {
        const bool branch_taken_0x11601c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11601Cu;
        // 0x116020: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11601c) {
            ctx->pc = 0x116058u;
            goto label_116058;
        }
    }
    ctx->pc = 0x116024u;
label_116024:
    // 0x116024: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x116024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116028: 0xc050fda  jal         func_143F68
    ctx->pc = 0x116028u;
    SET_GPR_U32(ctx, 31, 0x116030u);
    ctx->pc = 0x11602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116028u;
    // 0x11602c: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x116028u, 0x116030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116030u;
label_116030:
    // 0x116030: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x116030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x116034: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x116034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x116038: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x116038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x11603c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x11603cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x116040: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x116040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x116044: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x116044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x116048: 0x8ca4aa84  lw          $a0, -0x557C($a1)
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11604c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116050: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x116050u;
    SET_GPR_U32(ctx, 31, 0x116058u);
    ctx->pc = 0x116054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116050u;
    // 0x116054: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x116050u, 0x116058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116058u;
label_116058:
    // 0x116058: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x116058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11605c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11605cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116060: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x116060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x116064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116068: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x116068u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11606c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x11606cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116074: 0x3e00008  jr          $ra
    ctx->pc = 0x116074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116074u;
        // 0x116078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11607Cu;
    // 0x11607c: 0x0  nop
    ctx->pc = 0x11607cu;
    // NOP
    ctx->pc = 0x116080u;
}
