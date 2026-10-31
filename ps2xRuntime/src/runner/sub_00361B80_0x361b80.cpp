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

// Function: sub_00361B80
// Address: 0x361b80 - 0x361ea0
void sub_00361B80_0x361b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361B80_0x361b80");
#endif

    switch (ctx->pc) {
        case 0x361bc8u: goto label_361bc8;
        case 0x361be0u: goto label_361be0;
        case 0x361bf8u: goto label_361bf8;
        case 0x361c10u: goto label_361c10;
        case 0x361c28u: goto label_361c28;
        case 0x361c40u: goto label_361c40;
        case 0x361c58u: goto label_361c58;
        case 0x361c70u: goto label_361c70;
        case 0x361c84u: goto label_361c84;
        case 0x361c94u: goto label_361c94;
        case 0x361ca8u: goto label_361ca8;
        case 0x361cc0u: goto label_361cc0;
        case 0x361cd8u: goto label_361cd8;
        case 0x361ce8u: goto label_361ce8;
        case 0x361d00u: goto label_361d00;
        case 0x361d08u: goto label_361d08;
        case 0x361d1cu: goto label_361d1c;
        case 0x361d24u: goto label_361d24;
        case 0x361d3cu: goto label_361d3c;
        case 0x361d44u: goto label_361d44;
        case 0x361d58u: goto label_361d58;
        case 0x361d60u: goto label_361d60;
        case 0x361d74u: goto label_361d74;
        case 0x361d7cu: goto label_361d7c;
        case 0x361d94u: goto label_361d94;
        case 0x361d9cu: goto label_361d9c;
        case 0x361db4u: goto label_361db4;
        case 0x361dbcu: goto label_361dbc;
        case 0x361dd4u: goto label_361dd4;
        case 0x361de8u: goto label_361de8;
        case 0x361dfcu: goto label_361dfc;
        case 0x361e1cu: goto label_361e1c;
        case 0x361e24u: goto label_361e24;
        case 0x361e54u: goto label_361e54;
        case 0x361e64u: goto label_361e64;
        default: break;
    }

    ctx->pc = 0x361b80u;

    // 0x361b80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x361b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x361b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361b88: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x361b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x361b8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361b90: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x361b90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b94: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x361b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x361b98: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x361b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x361b9c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x361b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x361ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x361ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ba4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x361ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x361ba8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x361ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x361bac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x361bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x361bb0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x361bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x361bb4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x361bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x361bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x361bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x361bbc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x361bbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x361bc0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361BC0u;
    SET_GPR_U32(ctx, 31, 0x361BC8u);
    ctx->pc = 0x361BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BC0u;
    // 0x361bc4: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361BC0u, 0x361BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BC8u;
label_361bc8:
    // 0x361bc8: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x361BC8u;
    {
        const bool branch_taken_0x361bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BC8u;
        // 0x361bcc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361bc8) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361BD0u;
    // 0x361bd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361bd4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361bd8: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361BD8u;
    SET_GPR_U32(ctx, 31, 0x361BE0u);
    ctx->pc = 0x361BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BD8u;
    // 0x361bdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361BD8u, 0x361BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BE0u;
label_361be0:
    // 0x361be0: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x361BE0u;
    {
        const bool branch_taken_0x361be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BE0u;
        // 0x361be4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361be0) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361BE8u;
    // 0x361be8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361bec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361bf0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361BF0u;
    SET_GPR_U32(ctx, 31, 0x361BF8u);
    ctx->pc = 0x361BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BF0u;
    // 0x361bf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361BF0u, 0x361BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BF8u;
label_361bf8:
    // 0x361bf8: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x361BF8u;
    {
        const bool branch_taken_0x361bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BF8u;
        // 0x361bfc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361bf8) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361C00u;
    // 0x361c00: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361c04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361c08: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361C08u;
    SET_GPR_U32(ctx, 31, 0x361C10u);
    ctx->pc = 0x361C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C08u;
    // 0x361c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361C08u, 0x361C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C10u;
label_361c10:
    // 0x361c10: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x361C10u;
    {
        const bool branch_taken_0x361c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C10u;
        // 0x361c14: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c10) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361C18u;
    // 0x361c18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x361c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x361c1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361c20: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361C20u;
    SET_GPR_U32(ctx, 31, 0x361C28u);
    ctx->pc = 0x361C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C20u;
    // 0x361c24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361C20u, 0x361C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C28u;
label_361c28:
    // 0x361c28: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x361C28u;
    {
        const bool branch_taken_0x361c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C28u;
        // 0x361c2c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c28) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361C30u;
    // 0x361c30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x361c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x361c34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361c38: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361C38u;
    SET_GPR_U32(ctx, 31, 0x361C40u);
    ctx->pc = 0x361C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C38u;
    // 0x361c3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361C38u, 0x361C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C40u;
label_361c40:
    // 0x361c40: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x361C40u;
    {
        const bool branch_taken_0x361c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C40u;
        // 0x361c44: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c40) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361C48u;
    // 0x361c48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x361c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x361c4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361c50: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361C50u;
    SET_GPR_U32(ctx, 31, 0x361C58u);
    ctx->pc = 0x361C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C50u;
    // 0x361c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361C50u, 0x361C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C58u;
label_361c58:
    // 0x361c58: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x361C58u;
    {
        const bool branch_taken_0x361c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C58u;
        // 0x361c5c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c58) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361C60u;
    // 0x361c60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x361c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c64: 0x24509290  addiu       $s0, $v0, -0x6D70
    ctx->pc = 0x361c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x361c68: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x361C68u;
    SET_GPR_U32(ctx, 31, 0x361C70u);
    ctx->pc = 0x361C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C68u;
    // 0x361c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x361C68u, 0x361C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C70u;
label_361c70:
    // 0x361c70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x361c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c74: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x361c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c78: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x361c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x361c7c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361C7Cu;
    SET_GPR_U32(ctx, 31, 0x361C84u);
    ctx->pc = 0x361C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C7Cu;
    // 0x361c80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361C7Cu, 0x361C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C84u;
label_361c84:
    // 0x361c84: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x361C84u;
    {
        const bool branch_taken_0x361c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C84u;
        // 0x361c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c84) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361C8Cu;
    // 0x361c8c: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x361C8Cu;
    SET_GPR_U32(ctx, 31, 0x361C94u);
    ctx->pc = 0x361C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C8Cu;
    // 0x361c90: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x361C8Cu, 0x361C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C94u;
label_361c94:
    // 0x361c94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x361c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x361c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x361c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x361ca0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361CA0u;
    SET_GPR_U32(ctx, 31, 0x361CA8u);
    ctx->pc = 0x361CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CA0u;
    // 0x361ca4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361CA0u, 0x361CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CA8u;
label_361ca8:
    // 0x361ca8: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x361CA8u;
    {
        const bool branch_taken_0x361ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CA8u;
        // 0x361cac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ca8) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361CB0u;
    // 0x361cb0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x361cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x361cb4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x361cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361cb8: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361CB8u;
    SET_GPR_U32(ctx, 31, 0x361CC0u);
    ctx->pc = 0x361CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CB8u;
    // 0x361cbc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361CB8u, 0x361CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CC0u;
label_361cc0:
    // 0x361cc0: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x361CC0u;
    {
        const bool branch_taken_0x361cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CC0u;
        // 0x361cc4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cc0) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361CC8u;
    // 0x361cc8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x361cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x361ccc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x361cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361cd0: 0xc10311e  jal         func_40C478
    ctx->pc = 0x361CD0u;
    SET_GPR_U32(ctx, 31, 0x361CD8u);
    ctx->pc = 0x361CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CD0u;
    // 0x361cd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x361CD0u, 0x361CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CD8u;
label_361cd8:
    // 0x361cd8: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x361CD8u;
    {
        const bool branch_taken_0x361cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CD8u;
        // 0x361cdc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cd8) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361CE0u;
    // 0x361ce0: 0xc10314e  jal         func_40C538
    ctx->pc = 0x361CE0u;
    SET_GPR_U32(ctx, 31, 0x361CE8u);
    ctx->pc = 0x361CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CE0u;
    // 0x361ce4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x361CE0u, 0x361CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CE8u;
label_361ce8:
    // 0x361ce8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x361CE8u;
    {
        const bool branch_taken_0x361ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CE8u;
        // 0x361cec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ce8) {
            ctx->pc = 0x361E5Cu;
            goto label_361e5c;
        }
    }
    ctx->pc = 0x361CF0u;
    // 0x361cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361cf4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361cf8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361CF8u;
    SET_GPR_U32(ctx, 31, 0x361D00u);
    ctx->pc = 0x361CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CF8u;
    // 0x361cfc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361CF8u, 0x361D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D00u;
label_361d00:
    // 0x361d00: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361D00u;
    SET_GPR_U32(ctx, 31, 0x361D08u);
    ctx->pc = 0x361D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D00u;
    // 0x361d04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361D00u, 0x361D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D08u;
label_361d08:
    // 0x361d08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361d10: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x361d10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361D14u;
    SET_GPR_U32(ctx, 31, 0x361D1Cu);
    ctx->pc = 0x361D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D14u;
    // 0x361d18: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361D14u, 0x361D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D1Cu;
label_361d1c:
    // 0x361d1c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361D1Cu;
    SET_GPR_U32(ctx, 31, 0x361D24u);
    ctx->pc = 0x361D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D1Cu;
    // 0x361d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361D1Cu, 0x361D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D24u;
label_361d24:
    // 0x361d24: 0x29c00  sll         $s3, $v0, 16
    ctx->pc = 0x361d24u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361d28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361d30: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x361d30u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
    // 0x361d34: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361D34u;
    SET_GPR_U32(ctx, 31, 0x361D3Cu);
    ctx->pc = 0x361D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D34u;
    // 0x361d38: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361D34u, 0x361D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D3Cu;
label_361d3c:
    // 0x361d3c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x361D3Cu;
    SET_GPR_U32(ctx, 31, 0x361D44u);
    ctx->pc = 0x361D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D3Cu;
    // 0x361d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x361D3Cu, 0x361D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D44u;
label_361d44:
    // 0x361d44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x361d48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x361d4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361d50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361D50u;
    SET_GPR_U32(ctx, 31, 0x361D58u);
    ctx->pc = 0x361D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D50u;
    // 0x361d54: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361D50u, 0x361D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D58u;
label_361d58:
    // 0x361d58: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x361D58u;
    SET_GPR_U32(ctx, 31, 0x361D60u);
    ctx->pc = 0x361D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D58u;
    // 0x361d5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x361D58u, 0x361D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D60u;
label_361d60:
    // 0x361d60: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x361d60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x361d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d68: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x361d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x361d6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361D6Cu;
    SET_GPR_U32(ctx, 31, 0x361D74u);
    ctx->pc = 0x361D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D6Cu;
    // 0x361d70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361D6Cu, 0x361D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D74u;
label_361d74:
    // 0x361d74: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361D74u;
    SET_GPR_U32(ctx, 31, 0x361D7Cu);
    ctx->pc = 0x361D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D74u;
    // 0x361d78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361D74u, 0x361D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D7Cu;
label_361d7c:
    // 0x361d7c: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x361d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361d80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x361d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x361d88: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x361d88u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x361d8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361D8Cu;
    SET_GPR_U32(ctx, 31, 0x361D94u);
    ctx->pc = 0x361D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D8Cu;
    // 0x361d90: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361D8Cu, 0x361D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D94u;
label_361d94:
    // 0x361d94: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361D94u;
    SET_GPR_U32(ctx, 31, 0x361D9Cu);
    ctx->pc = 0x361D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D94u;
    // 0x361d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361D94u, 0x361D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D9Cu;
label_361d9c:
    // 0x361d9c: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x361d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x361da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361da4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x361da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x361da8: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x361da8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x361dac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361DACu;
    SET_GPR_U32(ctx, 31, 0x361DB4u);
    ctx->pc = 0x361DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DACu;
    // 0x361db0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361DACu, 0x361DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DB4u;
label_361db4:
    // 0x361db4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361DB4u;
    SET_GPR_U32(ctx, 31, 0x361DBCu);
    ctx->pc = 0x361DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DB4u;
    // 0x361db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361DB4u, 0x361DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DBCu;
label_361dbc:
    // 0x361dbc: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x361dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361dc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x361dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361dc4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x361dc4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x361dc8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x361dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x361dcc: 0xc1024c6  jal         func_409318
    ctx->pc = 0x361DCCu;
    SET_GPR_U32(ctx, 31, 0x361DD4u);
    ctx->pc = 0x361DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DCCu;
    // 0x361dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x361DCCu, 0x361DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DD4u;
label_361dd4:
    // 0x361dd4: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x361dd4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361dd8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x361dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ddc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x361ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x361de0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x361DE0u;
    SET_GPR_U32(ctx, 31, 0x361DE8u);
    ctx->pc = 0x361DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DE0u;
    // 0x361de4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x361DE0u, 0x361DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DE8u;
label_361de8:
    // 0x361de8: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x361de8u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361dec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x361decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361df0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x361df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x361df4: 0xc102488  jal         func_409220
    ctx->pc = 0x361DF4u;
    SET_GPR_U32(ctx, 31, 0x361DFCu);
    ctx->pc = 0x361DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DF4u;
    // 0x361df8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x361DF4u, 0x361DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DFCu;
label_361dfc:
    // 0x361dfc: 0x340680fe  ori         $a2, $zero, 0x80FE
    ctx->pc = 0x361dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33022);
    // 0x361e00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x361e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x361e04: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x361e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x361e08: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x361e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x361e0c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x361e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x361e10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361e10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e14: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361E14u;
    SET_GPR_U32(ctx, 31, 0x361E1Cu);
    ctx->pc = 0x361E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E14u;
    // 0x361e18: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361E14u, 0x361E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E1Cu;
label_361e1c:
    // 0x361e1c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361E1Cu;
    SET_GPR_U32(ctx, 31, 0x361E24u);
    ctx->pc = 0x361E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E1Cu;
    // 0x361e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361E1Cu, 0x361E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E24u;
label_361e24:
    // 0x361e24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x361e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x361e28: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x361e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x361e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e30: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x361e30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x361e34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x361e34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x361e38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x361e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e40: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x361e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e44: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x361e44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e48: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x361e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e4c: 0xc0a8c7c  jal         func_2A31F0
    ctx->pc = 0x361E4Cu;
    SET_GPR_U32(ctx, 31, 0x361E54u);
    ctx->pc = 0x361E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E4Cu;
    // 0x361e50: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A31F0u, 0x361E4Cu, 0x361E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E54u;
label_361e54:
    // 0x361e54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x361E54u;
    {
        const bool branch_taken_0x361e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E54u;
        // 0x361e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e54) {
            ctx->pc = 0x361E64u;
            goto label_361e64;
        }
    }
    ctx->pc = 0x361E5Cu;
label_361e5c:
    // 0x361e5c: 0xc0d8694  jal         func_361A50
    ctx->pc = 0x361E5Cu;
    SET_GPR_U32(ctx, 31, 0x361E64u);
    ctx->pc = 0x361E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E5Cu;
    // 0x361e60: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361A50u, 0x361E5Cu, 0x361E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E64u;
label_361e64:
    // 0x361e64: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x361e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x361e68: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x361e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361e6c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x361e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x361e70: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x361e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x361e74: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x361e74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x361e78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x361e78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361e7c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x361e7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361e80: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x361e80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361e84: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x361e84u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x361e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361e8c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x361e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x361e90: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x361e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361e94: 0x3e00008  jr          $ra
    ctx->pc = 0x361E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E94u;
        // 0x361e98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361E9Cu;
    // 0x361e9c: 0x0  nop
    ctx->pc = 0x361e9cu;
    // NOP
    ctx->pc = 0x361ea0u;
}
