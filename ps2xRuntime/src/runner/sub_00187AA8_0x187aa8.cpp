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

// Function: sub_00187AA8
// Address: 0x187aa8 - 0x187c38
void sub_00187AA8_0x187aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187AA8_0x187aa8");
#endif

    switch (ctx->pc) {
        case 0x187b38u: goto label_187b38;
        case 0x187b50u: goto label_187b50;
        case 0x187b64u: goto label_187b64;
        case 0x187b88u: goto label_187b88;
        case 0x187ba0u: goto label_187ba0;
        case 0x187bfcu: goto label_187bfc;
        default: break;
    }

    ctx->pc = 0x187aa8u;

    // 0x187aa8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x187aac: 0x34029024  ori         $v0, $zero, 0x9024
    ctx->pc = 0x187aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36900);
    // 0x187ab0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x187ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x187ab4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x187ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x187ab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187abc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x187abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x187ac0: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x187ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187ac4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x187ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x187ac8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x187ac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187acc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x187accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x187ad0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x187ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ad4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x187ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x187ad8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x187ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187adc: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x187adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x187ae0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x187ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x187ae4: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x187ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x187ae8: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x187ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x187aec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x187aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187af0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187AF0u;
    {
        const bool branch_taken_0x187af0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x187AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AF0u;
        // 0x187af4: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187af0) {
            ctx->pc = 0x187B18u;
            goto label_187b18;
        }
    }
    ctx->pc = 0x187AF8u;
    // 0x187af8: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x187afc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x187b00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x187b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x187b04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x187b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x187b08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187b0c: 0xad25000c  sw          $a1, 0xC($t1)
    ctx->pc = 0x187b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
    // 0x187b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187B10u;
    {
        const bool branch_taken_0x187b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B10u;
        // 0x187b14: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b10) {
            ctx->pc = 0x187B1Cu;
            goto label_187b1c;
        }
    }
    ctx->pc = 0x187B18u;
label_187b18:
    // 0x187b18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x187b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187b1c:
    // 0x187b1c: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x187b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x187b20: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x187b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x187b24: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x187b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x187b28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x187b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b2c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x187b30: 0xc10c4de  jal         func_431378
    ctx->pc = 0x187B30u;
    SET_GPR_U32(ctx, 31, 0x187B38u);
    ctx->pc = 0x187B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B30u;
    // 0x187b34: 0x26320c64  addiu       $s2, $s1, 0xC64 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x187B30u, 0x187B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B38u;
label_187b38:
    // 0x187b38: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x187b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x187b3c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x187b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x187b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b48: 0xc061e58  jal         func_187960
    ctx->pc = 0x187B48u;
    SET_GPR_U32(ctx, 31, 0x187B50u);
    ctx->pc = 0x187B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B48u;
    // 0x187b4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187960u, 0x187B48u, 0x187B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B50u;
label_187b50:
    // 0x187b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x187b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187b5c: 0xc061f4a  jal         func_187D28
    ctx->pc = 0x187B5Cu;
    SET_GPR_U32(ctx, 31, 0x187B64u);
    ctx->pc = 0x187B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B5Cu;
    // 0x187b60: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x187B5Cu, 0x187B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B64u;
label_187b64:
    // 0x187b64: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x187b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x187b68: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x187b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x187b6c: 0x8c445340  lw          $a0, 0x5340($v0)
    ctx->pc = 0x187b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E5340u));
    // 0x187b70: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x187b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
    // 0x187b74: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x187b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x187b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b7c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x187b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b80: 0xc055354  jal         func_154D50
    ctx->pc = 0x187B80u;
    SET_GPR_U32(ctx, 31, 0x187B88u);
    ctx->pc = 0x187B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B80u;
    // 0x187b84: 0x24e766e8  addiu       $a3, $a3, 0x66E8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x187B80u, 0x187B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B88u;
label_187b88:
    // 0x187b88: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x187b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187b8c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x187b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x187b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x187b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b98: 0xc138a22  jal         func_4E2888
    ctx->pc = 0x187B98u;
    SET_GPR_U32(ctx, 31, 0x187BA0u);
    ctx->pc = 0x187B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B98u;
    // 0x187b9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2888u, 0x187B98u, 0x187BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BA0u;
label_187ba0:
    // 0x187ba0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x187ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x187ba4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ba8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x187ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187bac: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187BACu;
    {
        const bool branch_taken_0x187bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BACu;
        // 0x187bb0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bac) {
            ctx->pc = 0x187BC8u;
            goto label_187bc8;
        }
    }
    ctx->pc = 0x187BB4u;
    // 0x187bb4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x187bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x187bb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x187bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187bbc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x187bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x187bc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x187BC0u;
    {
        const bool branch_taken_0x187bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187bc0) {
            ctx->pc = 0x187BCCu;
            goto label_187bcc;
        }
    }
    ctx->pc = 0x187BC8u;
label_187bc8:
    // 0x187bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187bcc:
    // 0x187bcc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x187BCCu;
    {
        const bool branch_taken_0x187bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BCCu;
        // 0x187bd0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bcc) {
            ctx->pc = 0x187C04u;
            goto label_187c04;
        }
    }
    ctx->pc = 0x187BD4u;
    // 0x187bd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x187bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x187bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187bdc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x187be0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x187be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x187be4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x187be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x187be8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187bec: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x187becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x187bf0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x187bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x187bf4: 0xc138b7c  jal         func_4E2DF0
    ctx->pc = 0x187BF4u;
    SET_GPR_U32(ctx, 31, 0x187BFCu);
    ctx->pc = 0x187BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187BF4u;
    // 0x187bf8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E2DF0u, 0x187BF4u, 0x187BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BFCu;
label_187bfc:
    // 0x187bfc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187c00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x187c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_187c04:
    // 0x187c04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x187c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187c08: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x187c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x187c0c: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x187c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x187c10: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x187c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x187c14: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x187c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x187c18: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x187c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x187c1c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x187c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x187c20: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x187c20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x187c24: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x187c24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187c28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x187c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x187C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C2Cu;
        // 0x187c30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C34u;
    // 0x187c34: 0x0  nop
    ctx->pc = 0x187c34u;
    // NOP
    ctx->pc = 0x187c38u;
}
