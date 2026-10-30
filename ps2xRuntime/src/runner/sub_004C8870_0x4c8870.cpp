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

// Function: sub_004C8870
// Address: 0x4c8870 - 0x4c8ab0
void sub_004C8870_0x4c8870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8870_0x4c8870");
#endif

    switch (ctx->pc) {
        case 0x4c8928u: goto label_4c8928;
        case 0x4c898cu: goto label_4c898c;
        case 0x4c8a34u: goto label_4c8a34;
        case 0x4c8a7cu: goto label_4c8a7c;
        default: break;
    }

    ctx->pc = 0x4c8870u;

    // 0x4c8870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4c8870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4c8874: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x4c8874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x4c8878: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4c8878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4c887c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x4c887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4c8880: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x4c8880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8884: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4c8884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4c8888: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4c8888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c888c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4c888cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4c8890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c8890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c8894: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4c8894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4c8898: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x4c8898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4c889c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4c889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4c88a0: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x4c88a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c88a4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4c88a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4c88a8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x4c88a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c88ac: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4c88acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4c88b0: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x4c88b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c88b4: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x4c88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x4c88b8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4c88b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4c88bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4c88bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c88c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4c88c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4c88c4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4c88c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4c88c8: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x4c88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x4c88cc: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x4c88ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4c88d0: 0x8fb700a0  lw          $s7, 0xA0($sp)
    ctx->pc = 0x4c88d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4c88d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C88D4u;
    {
        const bool branch_taken_0x4c88d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C88D4u;
        // 0x4c88d8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c88d4) {
            ctx->pc = 0x4C8930u;
            goto label_4c8930;
        }
    }
    ctx->pc = 0x4C88DCu;
    // 0x4c88dc: 0x2e31024  and         $v0, $s7, $v1
    ctx->pc = 0x4c88dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x4c88e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C88E0u;
    {
        const bool branch_taken_0x4c88e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C88E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C88E0u;
        // 0x4c88e4: 0x26a60007  addiu       $a2, $s5, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c88e0) {
            ctx->pc = 0x4C8928u;
            goto label_4c8928;
        }
    }
    ctx->pc = 0x4C88E8u;
    // 0x4c88e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c88ec: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x4c88ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x4c88f0: 0x26c70007  addiu       $a3, $s6, 0x7
    ctx->pc = 0x4c88f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 7));
    // 0x4c88f4: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4c88f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4c88f8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4c88f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4c88fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4c88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4c8900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c8900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c8904: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4c8904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4c8908: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c8908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c890c: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x4c890cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x4c8910: 0x26290004  addiu       $t1, $s1, 0x4
    ctx->pc = 0x4c8910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4c8914: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4c8914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4c8918: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x4c8918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x4c891c: 0x8faa0090  lw          $t2, 0x90($sp)
    ctx->pc = 0x4c891cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4c8920: 0xc131c1a  jal         func_4C7068
    ctx->pc = 0x4C8920u;
    SET_GPR_U32(ctx, 31, 0x4C8928u);
    ctx->pc = 0x4C8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8920u;
    // 0x4c8924: 0x8fab0028  lw          $t3, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C7068u, 0x4C8920u, 0x4C8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8928u;
label_4c8928:
    // 0x4c8928: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4c8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c892c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4c892cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c8930:
    // 0x4c8930: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x4c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4c8934: 0x32f08000  andi        $s0, $s7, 0x8000
    ctx->pc = 0x4c8934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32768);
    // 0x4c8938: 0x50880a  movz        $s1, $v0, $s0
    ctx->pc = 0x4c8938u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x4c893c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x4c893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4c8940: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4c8940u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4c8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4c8948: 0x3652fff8  ori         $s2, $s2, 0xFFF8
    ctx->pc = 0x4c8948u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65528);
    // 0x4c894c: 0x26a60007  addiu       $a2, $s5, 0x7
    ctx->pc = 0x4c894cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
    // 0x4c8950: 0x26c70007  addiu       $a3, $s6, 0x7
    ctx->pc = 0x4c8950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 7));
    // 0x4c8954: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4c8954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4c8958: 0x8faa0090  lw          $t2, 0x90($sp)
    ctx->pc = 0x4c8958u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4c895c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x4c895cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8960: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x4c8960u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c8964: 0xd23024  and         $a2, $a2, $s2
    ctx->pc = 0x4c8964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x4c8968: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4c8968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4c896c: 0xf23824  and         $a3, $a3, $s2
    ctx->pc = 0x4c896cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 18));
    // 0x4c8970: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4c8970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4c8974: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4c8974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8978: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4c8978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4c897c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c897cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8980: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x4c8980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x4c8984: 0xc131c1a  jal         func_4C7068
    ctx->pc = 0x4C8984u;
    SET_GPR_U32(ctx, 31, 0x4C898Cu);
    ctx->pc = 0x4C8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8984u;
    // 0x4c8988: 0xafb30018  sw          $s3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C7068u, 0x4C8984u, 0x4C898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C898Cu;
label_4c898c:
    // 0x4c898c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C898Cu;
    {
        const bool branch_taken_0x4c898c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C898Cu;
        // 0x4c8990: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c898c) {
            ctx->pc = 0x4C89A0u;
            goto label_4c89a0;
        }
    }
    ctx->pc = 0x4C8994u;
    // 0x4c8994: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x4c8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x4c8998: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4c8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4c899c: 0x2449fffc  addiu       $t1, $v0, -0x4
    ctx->pc = 0x4c899cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_4c89a0:
    // 0x4c89a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c89a4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x4c89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x4c89a8: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x4c89a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x4c89ac: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4c89acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4c89b0: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x4C89B0u;
    {
        const bool branch_taken_0x4c89b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C89B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C89B0u;
        // 0x4c89b4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c89b0) {
            ctx->pc = 0x4C8A7Cu;
            goto label_4c8a7c;
        }
    }
    ctx->pc = 0x4C89B8u;
    // 0x4c89b8: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x4c89b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4c89bc: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x4c89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4c89c0: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x4c89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4c89c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4c89c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4c89c8: 0x2862018  mult        $a0, $s4, $a2
    ctx->pc = 0x4c89c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4c89cc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x4c89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x4c89d0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4c89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4c89d4: 0x52a824  and         $s5, $v0, $s2
    ctx->pc = 0x4c89d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4c89d8: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x4c89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x4c89dc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4c89dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4c89e0: 0x72b024  and         $s6, $v1, $s2
    ctx->pc = 0x4c89e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4c89e4: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x4c89e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x4c89e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x4c89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4c89ec: 0x3c4f021  addu        $fp, $fp, $a0
    ctx->pc = 0x4c89ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x4c89f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c89f4: 0x14a042  srl         $s4, $s4, 1
    ctx->pc = 0x4c89f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4c89f8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4c89f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4c89fc: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x4c89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x4c8a00: 0x8faa0090  lw          $t2, 0x90($sp)
    ctx->pc = 0x4c8a00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4c8a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c8a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a08: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x4c8a08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c8a0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c8a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a10: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4c8a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a14: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4c8a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a18: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c8a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a1c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4c8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4c8a20: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4c8a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4c8a24: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x4c8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x4c8a28: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x4c8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x4c8a2c: 0xc131c1a  jal         func_4C7068
    ctx->pc = 0x4C8A2Cu;
    SET_GPR_U32(ctx, 31, 0x4C8A34u);
    ctx->pc = 0x4C8A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8A2Cu;
    // 0x4c8a30: 0xafb30018  sw          $s3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C7068u, 0x4C8A2Cu, 0x4C8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8A34u;
label_4c8a34:
    // 0x4c8a34: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x4c8a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4c8a38: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4c8a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a3c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x4c8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4c8a40: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4c8a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a44: 0x2862018  mult        $a0, $s4, $a2
    ctx->pc = 0x4c8a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4c8a48: 0x8faa0090  lw          $t2, 0x90($sp)
    ctx->pc = 0x4c8a48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4c8a4c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4c8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4c8a50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c8a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a54: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4c8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4c8a58: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4c8a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8a5c: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x4c8a5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c8a60: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x4c8a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x4c8a64: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x4c8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x4c8a68: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x4c8a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x4c8a6c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4c8a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4c8a70: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x4c8a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x4c8a74: 0xc131c1a  jal         func_4C7068
    ctx->pc = 0x4C8A74u;
    SET_GPR_U32(ctx, 31, 0x4C8A7Cu);
    ctx->pc = 0x4C8A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8A74u;
    // 0x4c8a78: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C7068u, 0x4C8A74u, 0x4C8A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8A7Cu;
label_4c8a7c:
    // 0x4c8a7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c8a80: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4c8a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c8a84: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4c8a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c8a88: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4c8a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c8a8c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4c8a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c8a90: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4c8a90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4c8a94: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4c8a94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4c8a98: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4c8a98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4c8a9c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4c8a9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4c8aa0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4c8aa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4c8aa4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4c8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4c8aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8AA8u;
        // 0x4c8aac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8AB0u;
}
