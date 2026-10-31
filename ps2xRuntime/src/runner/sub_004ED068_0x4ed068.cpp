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

// Function: sub_004ED068
// Address: 0x4ed068 - 0x4ed1e8
void sub_004ED068_0x4ed068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED068_0x4ed068");
#endif

    switch (ctx->pc) {
        case 0x4ed0a0u: goto label_4ed0a0;
        case 0x4ed0c0u: goto label_4ed0c0;
        case 0x4ed194u: goto label_4ed194;
        case 0x4ed1b0u: goto label_4ed1b0;
        default: break;
    }

    ctx->pc = 0x4ed068u;

label_4ed068:
    // 0x4ed068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ed068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ed06c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4ed06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4ed070: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ed070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ed074: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ed074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed078: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ed078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed07c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4ed07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4ed080: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x4ed080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4ed084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4ed084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4ed088: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ed088u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ed08c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed090: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4ed090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4ed094: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x4ED094u;
    {
        const bool branch_taken_0x4ed094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED094u;
        // 0x4ed098: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed094) {
            ctx->pc = 0x4ED1C8u;
            goto label_4ed1c8;
        }
    }
    ctx->pc = 0x4ED09Cu;
    // 0x4ed09c: 0x0  nop
    ctx->pc = 0x4ed09cu;
    // NOP
label_4ed0a0:
    // 0x4ed0a0: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4ED0A0u;
    {
        const bool branch_taken_0x4ed0a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED0A0u;
        // 0x4ed0a4: 0x2321023  subu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed0a0) {
            ctx->pc = 0x4ED0C8u;
            goto label_4ed0c8;
        }
    }
    ctx->pc = 0x4ED0A8u;
    // 0x4ed0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ed0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed0ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ed0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed0b0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4ed0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed0b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ed0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed0b8: 0xc13b3a4  jal         func_4ECE90
    ctx->pc = 0x4ED0B8u;
    SET_GPR_U32(ctx, 31, 0x4ED0C0u);
    ctx->pc = 0x4ED0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED0B8u;
    // 0x4ed0bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECE90u, 0x4ED0B8u, 0x4ED0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED0C0u;
label_4ed0c0:
    // 0x4ed0c0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4ED0C0u;
    {
        const bool branch_taken_0x4ed0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED0C0u;
        // 0x4ed0c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed0c0) {
            ctx->pc = 0x4ED1CCu;
            goto label_4ed1cc;
        }
    }
    ctx->pc = 0x4ED0C8u;
label_4ed0c8:
    // 0x4ed0c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4ed0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ed0cc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4ed0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4ed0d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x4ed0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x4ed0d4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ed0d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ed0d8: 0x24080084  addiu       $t0, $zero, 0x84
    ctx->pc = 0x4ed0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x4ed0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ed0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ed0e0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4ed0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x4ed0e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4ed0e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4ed0e8: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x4ed0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x4ed0ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ed0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ed0f0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ed0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ed0f4: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x4ed0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4ed0f8: 0x246514d4  addiu       $a1, $v1, 0x14D4
    ctx->pc = 0x4ed0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5332));
    // 0x4ed0fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ed0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed100: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x4ed100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ed104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ed104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed108: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x4ed108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ed10c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4ed10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4ed110: 0x9087000c  lbu         $a3, 0xC($a0)
    ctx->pc = 0x4ed110u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ed114: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4ed114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ed118: 0x9064000c  lbu         $a0, 0xC($v1)
    ctx->pc = 0x4ed118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ed11c: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x4ed11cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4ed120: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4ED120u;
    {
        const bool branch_taken_0x4ed120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED120u;
        // 0x4ed124: 0x2629fffc  addiu       $t1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed120) {
            ctx->pc = 0x4ED154u;
            goto label_4ed154;
        }
    }
    ctx->pc = 0x4ED128u;
    // 0x4ed128: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x4ed128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x4ed12c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ed12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed130: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x4ed130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ed134: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4ed134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ed138: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x4ed138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ed13c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4ed13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed140: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4ED140u;
    {
        const bool branch_taken_0x4ed140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED140u;
        // 0x4ed144: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed140) {
            ctx->pc = 0x4ED180u;
            goto label_4ed180;
        }
    }
    ctx->pc = 0x4ED148u;
    // 0x4ed148: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x4ed148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed14c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4ED14Cu;
    {
        const bool branch_taken_0x4ed14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED14Cu;
        // 0x4ed150: 0x242480a  movz        $t1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed14c) {
            ctx->pc = 0x4ED17Cu;
            goto label_4ed17c;
        }
    }
    ctx->pc = 0x4ED154u;
label_4ed154:
    // 0x4ed154: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x4ed154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x4ed158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ed158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed15c: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x4ed15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ed160: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4ed160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ed164: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x4ed164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4ed168: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x4ed168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed16c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ED16Cu;
    {
        const bool branch_taken_0x4ed16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED16Cu;
        // 0x4ed170: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed16c) {
            ctx->pc = 0x4ED180u;
            goto label_4ed180;
        }
    }
    ctx->pc = 0x4ED174u;
    // 0x4ed174: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x4ed174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed178: 0xc2480a  movz        $t1, $a2, $v0
    ctx->pc = 0x4ed178u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
label_4ed17c:
    // 0x4ed17c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4ed17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4ed180:
    // 0x4ed180: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4ed180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed184: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ed184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ed188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed18c: 0xc13b3e2  jal         func_4ECF88
    ctx->pc = 0x4ED18Cu;
    SET_GPR_U32(ctx, 31, 0x4ED194u);
    ctx->pc = 0x4ED190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED18Cu;
    // 0x4ed190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ECF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ECF88u, 0x4ED18Cu, 0x4ED194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED194u;
label_4ed194:
    // 0x4ed194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ed194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed198: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ed198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ed19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ed1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4ed1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1a8: 0xc13b41a  jal         func_4ED068
    ctx->pc = 0x4ED1A8u;
    SET_GPR_U32(ctx, 31, 0x4ED1B0u);
    ctx->pc = 0x4ED1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED1A8u;
    // 0x4ed1ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED068u;
    goto label_4ed068;
    ctx->pc = 0x4ED1B0u;
label_4ed1b0:
    // 0x4ed1b0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4ed1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed1b4: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x4ed1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4ed1b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4ed1b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4ed1bc: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4ed1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4ed1c0: 0x1040ffb7  beqz        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x4ED1C0u;
    {
        const bool branch_taken_0x4ed1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed1c0) {
            ctx->pc = 0x4ED0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ed0a0;
        }
    }
    ctx->pc = 0x4ED1C8u;
label_4ed1c8:
    // 0x4ed1c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4ed1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ed1cc:
    // 0x4ed1cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4ed1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed1d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ed1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed1d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4ed1d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED1DCu;
        // 0x4ed1e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED1E4u;
    // 0x4ed1e4: 0x0  nop
    ctx->pc = 0x4ed1e4u;
    // NOP
    ctx->pc = 0x4ed1e8u;
}
