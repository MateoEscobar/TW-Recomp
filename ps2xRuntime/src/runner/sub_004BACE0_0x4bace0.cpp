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

// Function: sub_004BACE0
// Address: 0x4bace0 - 0x4bae68
void sub_004BACE0_0x4bace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BACE0_0x4bace0");
#endif

    switch (ctx->pc) {
        case 0x4bad50u: goto label_4bad50;
        case 0x4bad5cu: goto label_4bad5c;
        case 0x4bad74u: goto label_4bad74;
        case 0x4badd0u: goto label_4badd0;
        case 0x4badf4u: goto label_4badf4;
        case 0x4bae08u: goto label_4bae08;
        case 0x4bae1cu: goto label_4bae1c;
        case 0x4bae28u: goto label_4bae28;
        case 0x4bae3cu: goto label_4bae3c;
        case 0x4bae50u: goto label_4bae50;
        default: break;
    }

    ctx->pc = 0x4bace0u;

    // 0x4bace0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4bace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4bace4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4bace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4bace8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4bace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4bacec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bacecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bacf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4bacf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4bacf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4bacf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4bacf8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bacf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bacfc: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x4bacfcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4bad00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4bad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4bad04: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4bad04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4bad08: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4bad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4bad0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bad10: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bad10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bad14: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BAD14u;
    {
        const bool branch_taken_0x4bad14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD14u;
        // 0x4bad18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad14) {
            ctx->pc = 0x4BAD80u;
            goto label_4bad80;
        }
    }
    ctx->pc = 0x4BAD1Cu;
    // 0x4bad1c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bad20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bad20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bad24: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4bad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4bad28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4bad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4bad2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BAD2Cu;
    {
        const bool branch_taken_0x4bad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD2Cu;
        // 0x4bad30: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad2c) {
            ctx->pc = 0x4BAD40u;
            goto label_4bad40;
        }
    }
    ctx->pc = 0x4BAD34u;
    // 0x4bad34: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x4BAD34u;
    {
        const bool branch_taken_0x4bad34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD34u;
        // 0x4bad38: 0xdc6211f8  ld          $v0, 0x11F8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad34) {
            ctx->pc = 0x4BAE50u;
            goto label_4bae50;
        }
    }
    ctx->pc = 0x4BAD3Cu;
    // 0x4bad3c: 0x0  nop
    ctx->pc = 0x4bad3cu;
    // NOP
label_4bad40:
    // 0x4bad40: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BAD40u;
    {
        const bool branch_taken_0x4bad40 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4BAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD40u;
        // 0x4bad44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad40) {
            ctx->pc = 0x4BAD64u;
            goto label_4bad64;
        }
    }
    ctx->pc = 0x4BAD48u;
    // 0x4bad48: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAD48u;
    SET_GPR_U32(ctx, 31, 0x4BAD50u);
    ctx->pc = 0x4BAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAD48u;
    // 0x4bad4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAD48u, 0x4BAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAD50u;
label_4bad50:
    // 0x4bad50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bad54: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BAD54u;
    SET_GPR_U32(ctx, 31, 0x4BAD5Cu);
    ctx->pc = 0x4BAD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAD54u;
    // 0x4bad58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BAD54u, 0x4BAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAD5Cu;
label_4bad5c:
    // 0x4bad5c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x4BAD5Cu;
    {
        const bool branch_taken_0x4bad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD5Cu;
        // 0x4bad60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad5c) {
            ctx->pc = 0x4BAE54u;
            goto label_4bae54;
        }
    }
    ctx->pc = 0x4BAD64u;
label_4bad64:
    // 0x4bad64: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x4bad64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x4bad68: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4bad68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4bad6c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAD6Cu;
    SET_GPR_U32(ctx, 31, 0x4BAD74u);
    ctx->pc = 0x4BAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAD6Cu;
    // 0x4bad70: 0x2412ffca  addiu       $s2, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAD6Cu, 0x4BAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAD74u;
label_4bad74:
    // 0x4bad74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bad74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bad78: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x4bad78u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4bad7c: 0x0  nop
    ctx->pc = 0x4bad7cu;
    // NOP
label_4bad80:
    // 0x4bad80: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4bad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4bad84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bad88: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4bad88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4bad8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BAD8Cu;
    {
        const bool branch_taken_0x4bad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD8Cu;
        // 0x4bad90: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad8c) {
            ctx->pc = 0x4BADA0u;
            goto label_4bada0;
        }
    }
    ctx->pc = 0x4BAD94u;
    // 0x4bad94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bad94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bad98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4BAD98u;
    {
        const bool branch_taken_0x4bad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAD98u;
        // 0x4bad9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bad98) {
            ctx->pc = 0x4BAE48u;
            goto label_4bae48;
        }
    }
    ctx->pc = 0x4BADA0u;
label_4bada0:
    // 0x4bada0: 0x2644fc01  addiu       $a0, $s2, -0x3FF
    ctx->pc = 0x4bada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x4bada4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x4bada4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bada8: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x4bada8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x4badac: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x4badacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x4badb0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4badb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4badb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4badb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4badb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4badb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4badbc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4badbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4badc0: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x4badc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x4badc4: 0x438025  or          $s0, $v0, $v1
    ctx->pc = 0x4badc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4badc8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4BADC8u;
    SET_GPR_U32(ctx, 31, 0x4BADD0u);
    ctx->pc = 0x4BADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BADC8u;
    // 0x4badcc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4BADC8u, 0x4BADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BADD0u;
label_4badd0:
    // 0x4badd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4badd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4badd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4badd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4badd8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4badd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4baddc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4baddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4bade0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x4bade0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4bade4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4bade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4bade8: 0x448825  or          $s1, $v0, $a0
    ctx->pc = 0x4bade8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4badec: 0xc12e9fc  jal         func_4BA7F0
    ctx->pc = 0x4BADECu;
    SET_GPR_U32(ctx, 31, 0x4BADF4u);
    ctx->pc = 0x4BADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BADECu;
    // 0x4badf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA7F0u, 0x4BADECu, 0x4BADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BADF4u;
label_4badf4:
    // 0x4badf4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4badf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4badf8: 0xdc251200  ld          $a1, 0x1200($at)
    ctx->pc = 0x4badf8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591200u));
    // 0x4badfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4badfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae00: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAE00u;
    SET_GPR_U32(ctx, 31, 0x4BAE08u);
    ctx->pc = 0x4BAE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE00u;
    // 0x4bae04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAE00u, 0x4BAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAE08u;
label_4bae08:
    // 0x4bae08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bae08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bae0c: 0xdc251208  ld          $a1, 0x1208($at)
    ctx->pc = 0x4bae0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591208u));
    // 0x4bae10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bae10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae14: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAE14u;
    SET_GPR_U32(ctx, 31, 0x4BAE1Cu);
    ctx->pc = 0x4BAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE14u;
    // 0x4bae18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAE14u, 0x4BAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAE1Cu;
label_4bae1c:
    // 0x4bae1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae20: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAE20u;
    SET_GPR_U32(ctx, 31, 0x4BAE28u);
    ctx->pc = 0x4BAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE20u;
    // 0x4bae24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAE20u, 0x4BAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAE28u;
label_4bae28:
    // 0x4bae28: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bae2c: 0xdc251210  ld          $a1, 0x1210($at)
    ctx->pc = 0x4bae2cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591210u));
    // 0x4bae30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bae30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae34: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAE34u;
    SET_GPR_U32(ctx, 31, 0x4BAE3Cu);
    ctx->pc = 0x4BAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAE34u;
    // 0x4bae38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAE34u, 0x4BAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAE3Cu;
label_4bae3c:
    // 0x4bae3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bae44: 0x0  nop
    ctx->pc = 0x4bae44u;
    // NOP
label_4bae48:
    // 0x4bae48: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAE48u;
    SET_GPR_U32(ctx, 31, 0x4BAE50u);
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAE48u, 0x4BAE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAE50u;
label_4bae50:
    // 0x4bae50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4bae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4bae54:
    // 0x4bae54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4bae54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bae58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4bae58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bae5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bae5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bae60: 0x3e00008  jr          $ra
    ctx->pc = 0x4BAE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAE60u;
        // 0x4bae64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BAE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BAE68u;
}
