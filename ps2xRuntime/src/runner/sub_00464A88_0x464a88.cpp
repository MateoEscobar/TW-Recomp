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

// Function: sub_00464A88
// Address: 0x464a88 - 0x464e30
void sub_00464A88_0x464a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464A88_0x464a88");
#endif

    switch (ctx->pc) {
        case 0x464ae4u: goto label_464ae4;
        case 0x464af0u: goto label_464af0;
        case 0x464afcu: goto label_464afc;
        case 0x464b24u: goto label_464b24;
        case 0x464b30u: goto label_464b30;
        case 0x464b3cu: goto label_464b3c;
        case 0x464b7cu: goto label_464b7c;
        case 0x464b88u: goto label_464b88;
        case 0x464bc0u: goto label_464bc0;
        case 0x464bd0u: goto label_464bd0;
        case 0x464c2cu: goto label_464c2c;
        case 0x464c38u: goto label_464c38;
        case 0x464c44u: goto label_464c44;
        case 0x464c4cu: goto label_464c4c;
        case 0x464c58u: goto label_464c58;
        case 0x464c64u: goto label_464c64;
        case 0x464c80u: goto label_464c80;
        case 0x464cc0u: goto label_464cc0;
        case 0x464cd0u: goto label_464cd0;
        case 0x464cd8u: goto label_464cd8;
        case 0x464d44u: goto label_464d44;
        case 0x464d4cu: goto label_464d4c;
        case 0x464d5cu: goto label_464d5c;
        case 0x464d88u: goto label_464d88;
        case 0x464d90u: goto label_464d90;
        case 0x464df8u: goto label_464df8;
        default: break;
    }

    ctx->pc = 0x464a88u;

    // 0x464a88: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x464a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x464a8c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x464a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x464a90: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x464a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x464a94: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x464a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x464a98: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x464a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x464a9c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x464a9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464aa0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x464aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x464aa4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x464aa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464aa8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x464aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x464aac: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x464aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x464ab0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x464ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x464ab4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x464ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x464ab8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x464ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x464abc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x464abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x464ac0: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x464ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x464ac4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x464ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x464ac8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x464ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x464acc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x464accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x464ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x464ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464ad4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x464ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x464ad8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x464ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464adc: 0xc121622  jal         func_485888
    ctx->pc = 0x464ADCu;
    SET_GPR_U32(ctx, 31, 0x464AE4u);
    ctx->pc = 0x464AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464ADCu;
    // 0x464ae0: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x464ADCu, 0x464AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464AE4u;
label_464ae4:
    // 0x464ae4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x464ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464ae8: 0xc121666  jal         func_485998
    ctx->pc = 0x464AE8u;
    SET_GPR_U32(ctx, 31, 0x464AF0u);
    ctx->pc = 0x464AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464AE8u;
    // 0x464aec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x464AE8u, 0x464AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464AF0u;
label_464af0:
    // 0x464af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x464af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464af4: 0xc1217b0  jal         func_485EC0
    ctx->pc = 0x464AF4u;
    SET_GPR_U32(ctx, 31, 0x464AFCu);
    ctx->pc = 0x464AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464AF4u;
    // 0x464af8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485EC0u, 0x464AF4u, 0x464AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464AFCu;
label_464afc:
    // 0x464afc: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x464AFCu;
    {
        const bool branch_taken_0x464afc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x464B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464AFCu;
        // 0x464b00: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464afc) {
            ctx->pc = 0x464B64u;
            goto label_464b64;
        }
    }
    ctx->pc = 0x464B04u;
    // 0x464b04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x464b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x464b08: 0x26d70010  addiu       $s7, $s6, 0x10
    ctx->pc = 0x464b08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x464b0c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x464b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x464b10: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x464b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x464b14: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x464b14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x464b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464b1c: 0xc121622  jal         func_485888
    ctx->pc = 0x464B1Cu;
    SET_GPR_U32(ctx, 31, 0x464B24u);
    ctx->pc = 0x464B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464B1Cu;
    // 0x464b20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x464B1Cu, 0x464B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464B24u;
label_464b24:
    // 0x464b24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x464b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464b28: 0xc121666  jal         func_485998
    ctx->pc = 0x464B28u;
    SET_GPR_U32(ctx, 31, 0x464B30u);
    ctx->pc = 0x464B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464B28u;
    // 0x464b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x464B28u, 0x464B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464B30u;
label_464b30:
    // 0x464b30: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x464b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x464b34: 0xc1217b0  jal         func_485EC0
    ctx->pc = 0x464B34u;
    SET_GPR_U32(ctx, 31, 0x464B3Cu);
    ctx->pc = 0x464B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464B34u;
    // 0x464b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485EC0u, 0x464B34u, 0x464B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464B3Cu;
label_464b3c:
    // 0x464b3c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x464b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464b40: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x464b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x464b44: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x464b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x464b48: 0x27be003c  addiu       $fp, $sp, 0x3C
    ctx->pc = 0x464b48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x464b4c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x464b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x464b50: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x464b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x464b54: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x464b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464b58: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x464b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x464b5c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x464B5Cu;
    {
        const bool branch_taken_0x464b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464B5Cu;
        // 0x464b60: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464b5c) {
            ctx->pc = 0x464C08u;
            goto label_464c08;
        }
    }
    ctx->pc = 0x464B64u;
label_464b64:
    // 0x464b64: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x464b64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x464b68: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x464b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x464b6c: 0x26d70010  addiu       $s7, $s6, 0x10
    ctx->pc = 0x464b6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x464b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x464b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464b74: 0xc121622  jal         func_485888
    ctx->pc = 0x464B74u;
    SET_GPR_U32(ctx, 31, 0x464B7Cu);
    ctx->pc = 0x464B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464B74u;
    // 0x464b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x464B74u, 0x464B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464B7Cu;
label_464b7c:
    // 0x464b7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x464b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464b80: 0xc121666  jal         func_485998
    ctx->pc = 0x464B80u;
    SET_GPR_U32(ctx, 31, 0x464B88u);
    ctx->pc = 0x464B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464B80u;
    // 0x464b84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x464B80u, 0x464B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464B88u;
label_464b88:
    // 0x464b88: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x464b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x464b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x464b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464b90: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x464b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x464b94: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x464b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x464b98: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x464b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x464b9c: 0x27be003c  addiu       $fp, $sp, 0x3C
    ctx->pc = 0x464b9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x464ba0: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x464ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x464ba4: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x464ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x464ba8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x464ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x464bac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x464bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464bb0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x464BB0u;
    {
        const bool branch_taken_0x464bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464BB0u;
        // 0x464bb4: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464bb0) {
            ctx->pc = 0x464C08u;
            goto label_464c08;
        }
    }
    ctx->pc = 0x464BB8u;
    // 0x464bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x464bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464bbc: 0x0  nop
    ctx->pc = 0x464bbcu;
    // NOP
label_464bc0:
    // 0x464bc0: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x464BC0u;
    {
        const bool branch_taken_0x464bc0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x464BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464BC0u;
        // 0x464bc4: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464bc0) {
            ctx->pc = 0x464BF8u;
            goto label_464bf8;
        }
    }
    ctx->pc = 0x464BC8u;
    // 0x464bc8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x464bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x464bcc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x464bccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_464bd0:
    // 0x464bd0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x464bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x464bd4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x464bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x464bd8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x464bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x464bdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x464bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x464be0: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x464be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x464be4: 0xd0282a  slt         $a1, $a2, $s0
    ctx->pc = 0x464be4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x464be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x464be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x464bec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x464becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x464bf0: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x464BF0u;
    {
        const bool branch_taken_0x464bf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x464BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464BF0u;
        // 0x464bf4: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464bf0) {
            ctx->pc = 0x464BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464bd0;
        }
    }
    ctx->pc = 0x464BF8u;
label_464bf8:
    // 0x464bf8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x464bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464bfc: 0x111102a  slt         $v0, $t0, $s1
    ctx->pc = 0x464bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x464c00: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x464C00u;
    {
        const bool branch_taken_0x464c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464c00) {
            ctx->pc = 0x464C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x464C00u;
            // 0x464c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x464BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464bc0;
        }
    }
    ctx->pc = 0x464C08u;
label_464c08:
    // 0x464c08: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x464c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x464c0c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464C0Cu;
    {
        const bool branch_taken_0x464c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x464C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464C0Cu;
        // 0x464c10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464c0c) {
            ctx->pc = 0x464C20u;
            goto label_464c20;
        }
    }
    ctx->pc = 0x464C14u;
    // 0x464c14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x464c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x464c18: 0x1223000d  beq         $s1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x464C18u;
    {
        const bool branch_taken_0x464c18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x464c18) {
            ctx->pc = 0x464C50u;
            goto label_464c50;
        }
    }
    ctx->pc = 0x464C20u;
label_464c20:
    // 0x464c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x464c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c24: 0xc121622  jal         func_485888
    ctx->pc = 0x464C24u;
    SET_GPR_U32(ctx, 31, 0x464C2Cu);
    ctx->pc = 0x464C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C24u;
    // 0x464c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485888u, 0x464C24u, 0x464C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C2Cu;
label_464c2c:
    // 0x464c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c30: 0xc121666  jal         func_485998
    ctx->pc = 0x464C30u;
    SET_GPR_U32(ctx, 31, 0x464C38u);
    ctx->pc = 0x464C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C30u;
    // 0x464c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485998u, 0x464C30u, 0x464C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C38u;
label_464c38:
    // 0x464c38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x464c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c3c: 0xc121acc  jal         func_486B30
    ctx->pc = 0x464C3Cu;
    SET_GPR_U32(ctx, 31, 0x464C44u);
    ctx->pc = 0x464C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C3Cu;
    // 0x464c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486B30u, 0x464C3Cu, 0x464C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C44u;
label_464c44:
    // 0x464c44: 0xc12164a  jal         func_485928
    ctx->pc = 0x464C44u;
    SET_GPR_U32(ctx, 31, 0x464C4Cu);
    ctx->pc = 0x464C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C44u;
    // 0x464c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x464C44u, 0x464C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C4Cu;
label_464c4c:
    // 0x464c4c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x464c4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464c50:
    // 0x464c50: 0xc121244  jal         func_484910
    ctx->pc = 0x464C50u;
    SET_GPR_U32(ctx, 31, 0x464C58u);
    ctx->pc = 0x464C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C50u;
    // 0x464c54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484910u, 0x464C50u, 0x464C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C58u;
label_464c58:
    // 0x464c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x464c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c5c: 0xc121288  jal         func_484A20
    ctx->pc = 0x464C5Cu;
    SET_GPR_U32(ctx, 31, 0x464C64u);
    ctx->pc = 0x464C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C5Cu;
    // 0x464c60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A20u, 0x464C5Cu, 0x464C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C64u;
label_464c64:
    // 0x464c64: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x464c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464c68: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x464c68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c6c: 0x8fa70054  lw          $a3, 0x54($sp)
    ctx->pc = 0x464c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x464c70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x464c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c74: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x464c74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x464c78: 0xc1217e4  jal         func_485F90
    ctx->pc = 0x464C78u;
    SET_GPR_U32(ctx, 31, 0x464C80u);
    ctx->pc = 0x464C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464C78u;
    // 0x464c7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F90u, 0x464C78u, 0x464C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464C80u;
label_464c80:
    // 0x464c80: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x464C80u;
    {
        const bool branch_taken_0x464c80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x464C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464C80u;
        // 0x464c84: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464c80) {
            ctx->pc = 0x464C90u;
            goto label_464c90;
        }
    }
    ctx->pc = 0x464C88u;
    // 0x464c88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x464C88u;
    {
        const bool branch_taken_0x464c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464C88u;
        // 0x464c8c: 0x90620023  lbu         $v0, 0x23($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464c88) {
            ctx->pc = 0x464C94u;
            goto label_464c94;
        }
    }
    ctx->pc = 0x464C90u;
label_464c90:
    // 0x464c90: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x464c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_464c94:
    // 0x464c94: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x464c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x464c98: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x464c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x464c9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x464C9Cu;
    {
        const bool branch_taken_0x464c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464C9Cu;
        // 0x464ca0: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464c9c) {
            ctx->pc = 0x464CACu;
            goto label_464cac;
        }
    }
    ctx->pc = 0x464CA4u;
    // 0x464ca4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x464ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x464ca8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x464ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_464cac:
    // 0x464cac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x464cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464cb0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x464cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x464cb4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x464cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x464cb8: 0xc121848  jal         func_486120
    ctx->pc = 0x464CB8u;
    SET_GPR_U32(ctx, 31, 0x464CC0u);
    ctx->pc = 0x464CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464CB8u;
    // 0x464cbc: 0x8fa7003c  lw          $a3, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x464CB8u, 0x464CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464CC0u;
label_464cc0:
    // 0x464cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464cc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x464cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464cc8: 0xc1217ca  jal         func_485F28
    ctx->pc = 0x464CC8u;
    SET_GPR_U32(ctx, 31, 0x464CD0u);
    ctx->pc = 0x464CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464CC8u;
    // 0x464ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F28u, 0x464CC8u, 0x464CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464CD0u;
label_464cd0:
    // 0x464cd0: 0xc122342  jal         func_488D08
    ctx->pc = 0x464CD0u;
    SET_GPR_U32(ctx, 31, 0x464CD8u);
    ctx->pc = 0x464CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464CD0u;
    // 0x464cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D08u, 0x464CD0u, 0x464CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464CD8u;
label_464cd8:
    // 0x464cd8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x464CD8u;
    {
        const bool branch_taken_0x464cd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x464CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464CD8u;
        // 0x464cdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464cd8) {
            ctx->pc = 0x464CE8u;
            goto label_464ce8;
        }
    }
    ctx->pc = 0x464CE0u;
    // 0x464ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x464CE0u;
    {
        const bool branch_taken_0x464ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464CE0u;
        // 0x464ce4: 0x8e820050  lw          $v0, 0x50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464ce0) {
            ctx->pc = 0x464CECu;
            goto label_464cec;
        }
    }
    ctx->pc = 0x464CE8u;
label_464ce8:
    // 0x464ce8: 0x8ec20050  lw          $v0, 0x50($s6)
    ctx->pc = 0x464ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
label_464cec:
    // 0x464cec: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x464cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x464cf0: 0x30440f00  andi        $a0, $v0, 0xF00
    ctx->pc = 0x464cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x464cf4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x464cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x464cf8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x464cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x464cfc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x464cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x464d00: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x464d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x464d04: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x464d04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x464d08: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x464d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x464d0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x464d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x464d10: 0x42b00  sll         $a1, $a0, 12
    ctx->pc = 0x464d10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x464d14: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x464d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x464d18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x464d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x464d1c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x464d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x464d20: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x464d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x464d24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x464d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x464d28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x464d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x464d2c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x464d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x464d30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x464d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x464d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x464d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464d38: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x464d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x464d3c: 0xc12164a  jal         func_485928
    ctx->pc = 0x464D3Cu;
    SET_GPR_U32(ctx, 31, 0x464D44u);
    ctx->pc = 0x464D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464D3Cu;
    // 0x464d40: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x464D3Cu, 0x464D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464D44u;
label_464d44:
    // 0x464d44: 0xc12164a  jal         func_485928
    ctx->pc = 0x464D44u;
    SET_GPR_U32(ctx, 31, 0x464D4Cu);
    ctx->pc = 0x464D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464D44u;
    // 0x464d48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x485928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485928u, 0x464D44u, 0x464D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464D4Cu;
label_464d4c:
    // 0x464d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x464d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464d54: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x464D54u;
    SET_GPR_U32(ctx, 31, 0x464D5Cu);
    ctx->pc = 0x464D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464D54u;
    // 0x464d58: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x464D54u, 0x464D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464D5Cu;
label_464d5c:
    // 0x464d5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x464d5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464d60: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x464D60u;
    {
        const bool branch_taken_0x464d60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x464D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464D60u;
        // 0x464d64: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464d60) {
            ctx->pc = 0x464D78u;
            goto label_464d78;
        }
    }
    ctx->pc = 0x464D68u;
    // 0x464d68: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x464d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x464d6c: 0xafb70024  sw          $s7, 0x24($sp)
    ctx->pc = 0x464d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 23));
    // 0x464d70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x464D70u;
    {
        const bool branch_taken_0x464d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464D70u;
        // 0x464d74: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464d70) {
            ctx->pc = 0x464DC0u;
            goto label_464dc0;
        }
    }
    ctx->pc = 0x464D78u;
label_464d78:
    // 0x464d78: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x464d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x464d7c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x464D7Cu;
    {
        const bool branch_taken_0x464d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464D7Cu;
        // 0x464d80: 0xafb70024  sw          $s7, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464d7c) {
            ctx->pc = 0x464DC0u;
            goto label_464dc0;
        }
    }
    ctx->pc = 0x464D84u;
    // 0x464d84: 0x0  nop
    ctx->pc = 0x464d84u;
    // NOP
label_464d88:
    // 0x464d88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x464d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x464d8c: 0x0  nop
    ctx->pc = 0x464d8cu;
    // NOP
label_464d90:
    // 0x464d90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x464d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x464d94: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x464d94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x464d98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x464D98u;
    {
        const bool branch_taken_0x464d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464D98u;
        // 0x464d9c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464d98) {
            ctx->pc = 0x464DB4u;
            goto label_464db4;
        }
    }
    ctx->pc = 0x464DA0u;
    // 0x464da0: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x464da0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x464da4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x464da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x464da8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x464da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x464dac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x464dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x464db0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x464db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_464db4:
    // 0x464db4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x464db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x464db8: 0x4c1fff5  bgez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x464DB8u;
    {
        const bool branch_taken_0x464db8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x464DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464DB8u;
        // 0x464dbc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464db8) {
            ctx->pc = 0x464D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464d90;
        }
    }
    ctx->pc = 0x464DC0u;
label_464dc0:
    // 0x464dc0: 0x2902001e  slti        $v0, $t0, 0x1E
    ctx->pc = 0x464dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x464dc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x464DC4u;
    {
        const bool branch_taken_0x464dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x464DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464DC4u;
        // 0x464dc8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464dc4) {
            ctx->pc = 0x464DE8u;
            goto label_464de8;
        }
    }
    ctx->pc = 0x464DCCu;
    // 0x464dcc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x464dccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464dd0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x464DD0u;
    {
        const bool branch_taken_0x464dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x464DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464DD0u;
        // 0x464dd4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464dd0) {
            ctx->pc = 0x464D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464d88;
        }
    }
    ctx->pc = 0x464DD8u;
    // 0x464dd8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x464dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x464ddc: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x464ddcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464de0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x464DE0u;
    {
        const bool branch_taken_0x464de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x464DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464DE0u;
        // 0x464de4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464de0) {
            ctx->pc = 0x464D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464d90;
        }
    }
    ctx->pc = 0x464DE8u;
label_464de8:
    // 0x464de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x464de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464dec: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x464decu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x464df0: 0xc12228e  jal         func_488A38
    ctx->pc = 0x464DF0u;
    SET_GPR_U32(ctx, 31, 0x464DF8u);
    ctx->pc = 0x464DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464DF0u;
    // 0x464df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A38u, 0x464DF0u, 0x464DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464DF8u;
label_464df8:
    // 0x464df8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x464df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464dfc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x464dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x464e00: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x464e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x464e04: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x464e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x464e08: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x464e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x464e0c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x464e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x464e10: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x464e10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x464e14: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x464e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x464e18: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x464e18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x464e1c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x464e1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x464e20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x464e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464e24: 0x3e00008  jr          $ra
    ctx->pc = 0x464E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x464E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464E24u;
        // 0x464e28: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464E2Cu;
    // 0x464e2c: 0x0  nop
    ctx->pc = 0x464e2cu;
    // NOP
    ctx->pc = 0x464e30u;
}
