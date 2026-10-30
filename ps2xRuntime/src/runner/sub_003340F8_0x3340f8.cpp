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

// Function: sub_003340F8
// Address: 0x3340f8 - 0x334300
void sub_003340F8_0x3340f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003340F8_0x3340f8");
#endif

    switch (ctx->pc) {
        case 0x334130u: goto label_334130;
        case 0x334154u: goto label_334154;
        case 0x334174u: goto label_334174;
        case 0x33418cu: goto label_33418c;
        case 0x3341acu: goto label_3341ac;
        case 0x3341e0u: goto label_3341e0;
        case 0x334224u: goto label_334224;
        case 0x33424cu: goto label_33424c;
        case 0x334258u: goto label_334258;
        case 0x334278u: goto label_334278;
        case 0x334298u: goto label_334298;
        case 0x3342b0u: goto label_3342b0;
        default: break;
    }

    ctx->pc = 0x3340f8u;

    // 0x3340f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3340f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3340fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3340fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x334100: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x334100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x334104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334108: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x334108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x33410c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33410cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334110: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x334110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x334114: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x334114u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334118: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x334118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x33411c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x33411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x334120: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x334120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x334124: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x334124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x334128: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x334128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x33412c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_334130:
    // 0x334130: 0x26638000  addiu       $v1, $s3, -0x8000
    ctx->pc = 0x334130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934528));
    // 0x334134: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x334134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334138: 0x8c627fe0  lw          $v0, 0x7FE0($v1)
    ctx->pc = 0x334138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32736)));
    // 0x33413c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334140: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x334140u;
    {
        const bool branch_taken_0x334140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334140u;
        // 0x334144: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334140) {
            ctx->pc = 0x33415Cu;
            goto label_33415c;
        }
    }
    ctx->pc = 0x334148u;
    // 0x334148: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x334148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33414c: 0xc0ccdb8  jal         func_3336E0
    ctx->pc = 0x33414Cu;
    SET_GPR_U32(ctx, 31, 0x334154u);
    ctx->pc = 0x334150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33414Cu;
    // 0x334150: 0x2665ffe0  addiu       $a1, $s3, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3336E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3336E0u, 0x33414Cu, 0x334154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334154u;
label_334154:
    // 0x334154: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334154u;
    {
        const bool branch_taken_0x334154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334154u;
        // 0x334158: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334154) {
            ctx->pc = 0x33417Cu;
            goto label_33417c;
        }
    }
    ctx->pc = 0x33415Cu;
label_33415c:
    // 0x33415c: 0x8e027ff0  lw          $v0, 0x7FF0($s0)
    ctx->pc = 0x33415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32752)));
    // 0x334160: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334164: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x334164u;
    {
        const bool branch_taken_0x334164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334164u;
        // 0x334168: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334164) {
            ctx->pc = 0x3341B4u;
            goto label_3341b4;
        }
    }
    ctx->pc = 0x33416Cu;
    // 0x33416c: 0xc0ccdb8  jal         func_3336E0
    ctx->pc = 0x33416Cu;
    SET_GPR_U32(ctx, 31, 0x334174u);
    ctx->pc = 0x334170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33416Cu;
    // 0x334170: 0x2665fff0  addiu       $a1, $s3, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3336E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3336E0u, 0x33416Cu, 0x334174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334174u;
label_334174:
    // 0x334174: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x334174u;
    {
        const bool branch_taken_0x334174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334174u;
        // 0x334178: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334174) {
            ctx->pc = 0x3341B4u;
            goto label_3341b4;
        }
    }
    ctx->pc = 0x33417Cu;
label_33417c:
    // 0x33417c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334180: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x334180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x334184: 0xc0ccf88  jal         func_333E20
    ctx->pc = 0x334184u;
    SET_GPR_U32(ctx, 31, 0x33418Cu);
    ctx->pc = 0x334188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334184u;
    // 0x334188: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333E20u, 0x334184u, 0x33418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33418Cu;
label_33418c:
    // 0x33418c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x33418Cu;
    {
        const bool branch_taken_0x33418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33418Cu;
        // 0x334190: 0x17a900  sll         $s5, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33418c) {
            ctx->pc = 0x3342B8u;
            goto label_3342b8;
        }
    }
    ctx->pc = 0x334194u;
    // 0x334194: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x334194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x334198: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x334198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33419c: 0x2665ffe0  addiu       $a1, $s3, -0x20
    ctx->pc = 0x33419cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x3341a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3341a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3341a4: 0xc0ca19a  jal         func_328668
    ctx->pc = 0x3341A4u;
    SET_GPR_U32(ctx, 31, 0x3341ACu);
    ctx->pc = 0x3341A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341A4u;
    // 0x3341a8: 0x24476848  addiu       $a3, $v0, 0x6848 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 26696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328668u, 0x3341A4u, 0x3341ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341ACu;
label_3341ac:
    // 0x3341ac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3341ACu;
    {
        const bool branch_taken_0x3341ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341ACu;
        // 0x3341b0: 0x3d78823  subu        $s1, $fp, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341ac) {
            ctx->pc = 0x3342BCu;
            goto label_3342bc;
        }
    }
    ctx->pc = 0x3341B4u;
label_3341b4:
    // 0x3341b4: 0x8e037ff8  lw          $v1, 0x7FF8($s0)
    ctx->pc = 0x3341b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32760)));
    // 0x3341b8: 0x17a900  sll         $s5, $s7, 4
    ctx->pc = 0x3341b8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x3341bc: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x3341bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3341c0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3341C0u;
    {
        const bool branch_taken_0x3341c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341C0u;
        // 0x3341c4: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341c0) {
            ctx->pc = 0x3342B8u;
            goto label_3342b8;
        }
    }
    ctx->pc = 0x3341C8u;
    // 0x3341c8: 0x8e027fe8  lw          $v0, 0x7FE8($s0)
    ctx->pc = 0x3341c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32744)));
    // 0x3341cc: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x3341ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3341d0: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x3341d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3341d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3341D4u;
    {
        const bool branch_taken_0x3341d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3341D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3341D4u;
        // 0x3341d8: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3341d4) {
            ctx->pc = 0x3341F8u;
            goto label_3341f8;
        }
    }
    ctx->pc = 0x3341DCu;
    // 0x3341dc: 0x0  nop
    ctx->pc = 0x3341dcu;
    // NOP
label_3341e0:
    // 0x3341e0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3341e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3341e4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3341e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3341e8: 0x8c43fff8  lw          $v1, -0x8($v0)
    ctx->pc = 0x3341e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
    // 0x3341ec: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x3341ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3341f0: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x3341f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3341f4: 0x17a900  sll         $s5, $s7, 4
    ctx->pc = 0x3341f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_3341f8:
    // 0x3341f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3341f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3341fc: 0x2751823  subu        $v1, $s3, $s5
    ctx->pc = 0x3341fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x334200: 0x2f1102a  slt         $v0, $s7, $s1
    ctx->pc = 0x334200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x334204: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334204u;
    {
        const bool branch_taken_0x334204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334204u;
        // 0x334208: 0x2465fff0  addiu       $a1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334204) {
            ctx->pc = 0x33422Cu;
            goto label_33422c;
        }
    }
    ctx->pc = 0x33420Cu;
    // 0x33420c: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x33420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x334210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x334210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334214: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x334214u;
    {
        const bool branch_taken_0x334214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x334218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334214u;
        // 0x334218: 0x171100  sll         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334214) {
            ctx->pc = 0x3341E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3341e0;
        }
    }
    ctx->pc = 0x33421Cu;
    // 0x33421c: 0xc0ccdb8  jal         func_3336E0
    ctx->pc = 0x33421Cu;
    SET_GPR_U32(ctx, 31, 0x334224u);
    ctx->pc = 0x3336E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3336E0u, 0x33421Cu, 0x334224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334224u;
label_334224:
    // 0x334224: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x334224u;
    {
        const bool branch_taken_0x334224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334224u;
        // 0x334228: 0x171100  sll         $v0, $s7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334224) {
            ctx->pc = 0x3341E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3341e0;
        }
    }
    ctx->pc = 0x33422Cu;
label_33422c:
    // 0x33422c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x33422cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x334230: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x334230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x334234: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x334234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x334238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334238u;
    {
        const bool branch_taken_0x334238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334238u;
        // 0x33423c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334238) {
            ctx->pc = 0x33424Cu;
            goto label_33424c;
        }
    }
    ctx->pc = 0x334240u;
    // 0x334240: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x334240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334244: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x334244u;
    SET_GPR_U32(ctx, 31, 0x33424Cu);
    ctx->pc = 0x334248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334244u;
    // 0x334248: 0x24456850  addiu       $a1, $v0, 0x6850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x334244u, 0x33424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33424Cu;
label_33424c:
    // 0x33424c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334250: 0xc0cb244  jal         func_32C910
    ctx->pc = 0x334250u;
    SET_GPR_U32(ctx, 31, 0x334258u);
    ctx->pc = 0x334254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334250u;
    // 0x334254: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x334250u, 0x334258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334258u;
label_334258:
    // 0x334258: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x334258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33425c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x33425cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334260: 0x1ae0000f  blez        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x334260u;
    {
        const bool branch_taken_0x334260 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x334264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334260u;
        // 0x334264: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334260) {
            ctx->pc = 0x3342A0u;
            goto label_3342a0;
        }
    }
    ctx->pc = 0x334268u;
    // 0x334268: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x334268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x33426c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x33426cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x334270: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x334270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x334274: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x334274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_334278:
    // 0x334278: 0x2922021  addu        $a0, $s4, $s2
    ctx->pc = 0x334278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x33427c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33427cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x334280: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x334280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x334284: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x334284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x334288: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x334288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33428c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33428cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334290: 0xc10c190  jal         func_430640
    ctx->pc = 0x334290u;
    SET_GPR_U32(ctx, 31, 0x334298u);
    ctx->pc = 0x334294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334290u;
    // 0x334294: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x334290u, 0x334298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334298u;
label_334298:
    // 0x334298: 0x5e20fff7  bgtzl       $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x334298u;
    {
        const bool branch_taken_0x334298 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x334298) {
            ctx->pc = 0x33429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334298u;
            // 0x33429c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334278;
        }
    }
    ctx->pc = 0x3342A0u;
label_3342a0:
    // 0x3342a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3342a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3342a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3342a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3342a8: 0xc0cbebc  jal         func_32FAF0
    ctx->pc = 0x3342A8u;
    SET_GPR_U32(ctx, 31, 0x3342B0u);
    ctx->pc = 0x3342ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3342A8u;
    // 0x3342ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x3342A8u, 0x3342B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3342B0u;
label_3342b0:
    // 0x3342b0: 0x2751823  subu        $v1, $s3, $s5
    ctx->pc = 0x3342b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x3342b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3342b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3342b8:
    // 0x3342b8: 0x3d78823  subu        $s1, $fp, $s7
    ctx->pc = 0x3342b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_3342bc:
    // 0x3342bc: 0x26a2fff0  addiu       $v0, $s5, -0x10
    ctx->pc = 0x3342bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x3342c0: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x3342c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3342c4: 0x1060ff9a  beqz        $v1, . + 4 + (-0x66 << 2)
    ctx->pc = 0x3342C4u;
    {
        const bool branch_taken_0x3342c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3342C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342C4u;
        // 0x3342c8: 0x2629823  subu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3342c4) {
            ctx->pc = 0x334130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334130;
        }
    }
    ctx->pc = 0x3342CCu;
    // 0x3342cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3342ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3342d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3342d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3342d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3342d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3342d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3342d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3342dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3342dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3342e0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3342e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3342e4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3342e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3342e8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3342e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3342ec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3342ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3342f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3342f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3342f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3342F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3342F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3342F4u;
        // 0x3342f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3342F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3342FCu;
    // 0x3342fc: 0x0  nop
    ctx->pc = 0x3342fcu;
    // NOP
    ctx->pc = 0x334300u;
}
