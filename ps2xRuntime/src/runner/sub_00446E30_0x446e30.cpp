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

// Function: sub_00446E30
// Address: 0x446e30 - 0x447250
void sub_00446E30_0x446e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446E30_0x446e30");
#endif

    switch (ctx->pc) {
        case 0x446f04u: goto label_446f04;
        case 0x447190u: goto label_447190;
        case 0x44719cu: goto label_44719c;
        case 0x4471e0u: goto label_4471e0;
        case 0x4471f0u: goto label_4471f0;
        default: break;
    }

    ctx->pc = 0x446e30u;

    // 0x446e30: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x446e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x446e34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x446e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x446e38: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x446e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x446e3c: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x446e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x446e40: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x446e40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e44: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x446e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x446e48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x446e48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e4c: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x446e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x446e50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x446e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e54: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x446e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x446e58: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x446e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x446e5c: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x446e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x446e60: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x446e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x446e64: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x446e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x446e68: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x446e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x446e6c: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x446e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x446e70: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x446E70u;
    {
        const bool branch_taken_0x446e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x446E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446E70u;
        // 0x446e74: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e70) {
            ctx->pc = 0x446E8Cu;
            goto label_446e8c;
        }
    }
    ctx->pc = 0x446E78u;
    // 0x446e78: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x446e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x446e7c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x446e7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e80: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x446e80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x446E84u;
    {
        const bool branch_taken_0x446e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446E84u;
        // 0x446e88: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446e84) {
            ctx->pc = 0x446E94u;
            goto label_446e94;
        }
    }
    ctx->pc = 0x446E8Cu;
label_446e8c:
    // 0x446e8c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x446e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446e90: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x446e90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_446e94:
    // 0x446e94: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x446e94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x446e98: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x446e98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x446e9c: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x446e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x446ea0: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x446ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x446ea4: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x446ea4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x446ea8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x446ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x446eac: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x446EACu;
    {
        const bool branch_taken_0x446eac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x446EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446EACu;
        // 0x446eb0: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446eac) {
            ctx->pc = 0x446F40u;
            goto label_446f40;
        }
    }
    ctx->pc = 0x446EB4u;
    // 0x446eb4: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x446eb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x446eb8: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x446EB8u;
    {
        const bool branch_taken_0x446eb8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x446eb8) {
            ctx->pc = 0x446EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446EB8u;
            // 0x446ebc: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446F50u;
            goto label_446f50;
        }
    }
    ctx->pc = 0x446EC0u;
    // 0x446ec0: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x446ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x446ec4: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x446EC4u;
    {
        const bool branch_taken_0x446ec4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x446ec4) {
            ctx->pc = 0x446EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446EC4u;
            // 0x446ec8: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446F50u;
            goto label_446f50;
        }
    }
    ctx->pc = 0x446ECCu;
    // 0x446ecc: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x446eccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x446ed0: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x446ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x446ed4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x446ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x446ed8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x446ed8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x446edc: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x446edcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x446ee0: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x446ee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x446ee4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x446ee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x446ee8: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x446ee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x446eec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x446eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x446ef0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x446ef0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x446ef4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x446ef4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x446ef8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x446ef8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x446efc: 0xc10b602  jal         func_42D808
    ctx->pc = 0x446EFCu;
    SET_GPR_U32(ctx, 31, 0x446F04u);
    ctx->pc = 0x446F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446EFCu;
    // 0x446f00: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x446EFCu, 0x446F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446F04u;
label_446f04:
    // 0x446f04: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x446f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x446f08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x446f08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x446f0c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x446f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x446f10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x446f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x446f14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x446f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x446f18: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x446f18u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x446f1c: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x446f1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x446f20: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x446f20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x446f24: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x446F24u;
    {
        const bool branch_taken_0x446f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x446F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446F24u;
        // 0x446f28: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f24) {
            ctx->pc = 0x446F4Cu;
            goto label_446f4c;
        }
    }
    ctx->pc = 0x446F2Cu;
    // 0x446f2c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x446f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x446f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x446f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x446f34: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x446f34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x446f38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x446F38u;
    {
        const bool branch_taken_0x446f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446F38u;
        // 0x446f3c: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f38) {
            ctx->pc = 0x446F50u;
            goto label_446f50;
        }
    }
    ctx->pc = 0x446F40u;
label_446f40:
    // 0x446f40: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x446f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x446f44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x446F44u;
    {
        const bool branch_taken_0x446f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446F44u;
        // 0x446f48: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446f44) {
            ctx->pc = 0x446F50u;
            goto label_446f50;
        }
    }
    ctx->pc = 0x446F4Cu;
label_446f4c:
    // 0x446f4c: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x446f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_446f50:
    // 0x446f50: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x446f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x446f54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x446f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x446f58: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x446F58u;
    {
        const bool branch_taken_0x446f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x446f58) {
            ctx->pc = 0x446F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446F58u;
            // 0x446f5c: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446F80u;
            goto label_446f80;
        }
    }
    ctx->pc = 0x446F60u;
    // 0x446f60: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x446f60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x446f64: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x446F64u;
    {
        const bool branch_taken_0x446f64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x446f64) {
            ctx->pc = 0x446F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446F64u;
            // 0x446f68: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446F80u;
            goto label_446f80;
        }
    }
    ctx->pc = 0x446F6Cu;
    // 0x446f6c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x446f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x446f70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x446f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x446f74: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x446f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x446f78: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x446f78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x446f7c: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x446f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_446f80:
    // 0x446f80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x446f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446f84: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x446f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x446f88: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x446f88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x446f8c: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x446f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x446f90: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x446f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x446f94: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x446f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x446f98: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x446f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x446f9c: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x446f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x446fa0: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x446fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x446fa4: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x446fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x446fa8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x446fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x446fac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x446facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x446fb0: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x446fb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x446fb4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x446fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x446fb8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x446fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x446fbc: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x446fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x446fc0: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x446fc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x446fc4: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x446fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x446fc8: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x446fc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x446fcc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x446fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x446fd0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x446fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x446fd4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x446fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x446fd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x446fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x446fdc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x446fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x446fe0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x446fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x446fe4: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x446fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x446fe8: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x446FE8u;
    {
        const bool branch_taken_0x446fe8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x446FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446FE8u;
        // 0x446fec: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446fe8) {
            ctx->pc = 0x44704Cu;
            goto label_44704c;
        }
    }
    ctx->pc = 0x446FF0u;
    // 0x446ff0: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x446ff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x446ff4: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x446FF4u;
    {
        const bool branch_taken_0x446ff4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x446ff4) {
            ctx->pc = 0x446FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446FF4u;
            // 0x446ff8: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447054u;
            goto label_447054;
        }
    }
    ctx->pc = 0x446FFCu;
    // 0x446ffc: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x446FFCu;
    {
        const bool branch_taken_0x446ffc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x446ffc) {
            ctx->pc = 0x447000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446FFCu;
            // 0x447000: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447054u;
            goto label_447054;
        }
    }
    ctx->pc = 0x447004u;
    // 0x447004: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x447004u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x447008: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x447008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x44700c: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x44700cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x447010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x447010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x447014: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x447014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x447018: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x447018u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x44701c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x44701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x447020: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x447020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x447024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x447024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x447028: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x447028u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x44702c: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x44702cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x447030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x447030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x447034: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x447034u;
    {
        const bool branch_taken_0x447034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447034u;
        // 0x447038: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447034) {
            ctx->pc = 0x447054u;
            goto label_447054;
        }
    }
    ctx->pc = 0x44703Cu;
    // 0x44703c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x44703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x447040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x447044u;
    {
        const bool branch_taken_0x447044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447044u;
        // 0x447048: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447044) {
            ctx->pc = 0x447054u;
            goto label_447054;
        }
    }
    ctx->pc = 0x44704Cu;
label_44704c:
    // 0x44704c: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x44704cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x447050: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x447050u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_447054:
    // 0x447054: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x447054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x447058: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x447058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x44705c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44705Cu;
    {
        const bool branch_taken_0x44705c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x44705c) {
            ctx->pc = 0x447060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44705Cu;
            // 0x447060: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447084u;
            goto label_447084;
        }
    }
    ctx->pc = 0x447064u;
    // 0x447064: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x447064u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x447068: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x447068u;
    {
        const bool branch_taken_0x447068 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x447068) {
            ctx->pc = 0x44706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x447068u;
            // 0x44706c: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447084u;
            goto label_447084;
        }
    }
    ctx->pc = 0x447070u;
    // 0x447070: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x447070u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x447074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x447074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x447078: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x447078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x44707c: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x44707cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x447080: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x447080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_447084:
    // 0x447084: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x447084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x447088: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x447088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x44708c: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x44708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x447090: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x447090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x447094: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x447094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x447098: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x447098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x44709c: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x44709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x4470a0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4470a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x4470a4: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x4470a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x4470a8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x4470a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x4470ac: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x4470acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x4470b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4470b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4470b4: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x4470b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x4470b8: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x4470b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x4470bc: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x4470bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4470c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4470c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4470c4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4470c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4470c8: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x4470c8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x4470cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4470ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4470d0: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x4470d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x4470d4: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x4470d4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x4470d8: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x4470d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x4470dc: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x4470dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x4470e0: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x4470e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x4470e4: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x4470e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4470e8: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x4470e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x4470ec: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4470ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4470f0: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x4470f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x4470f4: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x4470f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x4470f8: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x4470f8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x4470fc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4470fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x447100: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x447100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x447104: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x447104u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x447108: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x447108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x44710c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x44710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x447110: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x447110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x447114: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x447114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x447118: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x447118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x44711c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x44711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x447120: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x447120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x447124: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x447124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x447128: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x447128u;
    {
        const bool branch_taken_0x447128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447128u;
        // 0x44712c: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447128) {
            ctx->pc = 0x447154u;
            goto label_447154;
        }
    }
    ctx->pc = 0x447130u;
    // 0x447130: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x447130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x447134: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x447134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x447138: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x447138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x44713c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x44713Cu;
    {
        const bool branch_taken_0x44713c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44713Cu;
        // 0x447140: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44713c) {
            ctx->pc = 0x44716Cu;
            goto label_44716c;
        }
    }
    ctx->pc = 0x447144u;
    // 0x447144: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x447144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x447148: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x447148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x44714c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x44714Cu;
    {
        const bool branch_taken_0x44714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44714Cu;
        // 0x447150: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44714c) {
            ctx->pc = 0x44716Cu;
            goto label_44716c;
        }
    }
    ctx->pc = 0x447154u;
label_447154:
    // 0x447154: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x447154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x447158: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x447158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x44715c: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x44715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x447160: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x447160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x447164: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x447164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x447168: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x447168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44716c:
    // 0x44716c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x44716Cu;
    {
        const bool branch_taken_0x44716c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x44716c) {
            ctx->pc = 0x447170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44716Cu;
            // 0x447170: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4471A8u;
            goto label_4471a8;
        }
    }
    ctx->pc = 0x447174u;
    // 0x447174: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x447174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x447178: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x447178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x44717c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x44717cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x447180: 0x24c6e0d8  addiu       $a2, $a2, -0x1F28
    ctx->pc = 0x447180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959320));
    // 0x447184: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x447184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447188: 0xc10fe0a  jal         func_43F828
    ctx->pc = 0x447188u;
    SET_GPR_U32(ctx, 31, 0x447190u);
    ctx->pc = 0x44718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447188u;
    // 0x44718c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F828u, 0x447188u, 0x447190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x447190u;
label_447190:
    // 0x447190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x447190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447194: 0xc111f76  jal         func_447DD8
    ctx->pc = 0x447194u;
    SET_GPR_U32(ctx, 31, 0x44719Cu);
    ctx->pc = 0x447198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x447194u;
    // 0x447198: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447DD8u, 0x447194u, 0x44719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44719Cu;
label_44719c:
    // 0x44719c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x44719Cu;
    {
        const bool branch_taken_0x44719c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4471A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44719Cu;
        // 0x4471a0: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44719c) {
            ctx->pc = 0x447224u;
            goto label_447224;
        }
    }
    ctx->pc = 0x4471A4u;
    // 0x4471a4: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x4471a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_4471a8:
    // 0x4471a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4471a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4471ac: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4471ACu;
    {
        const bool branch_taken_0x4471ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4471B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4471ACu;
        // 0x4471b0: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4471ac) {
            ctx->pc = 0x447224u;
            goto label_447224;
        }
    }
    ctx->pc = 0x4471B4u;
    // 0x4471b4: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x4471b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x4471b8: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4471B8u;
    {
        const bool branch_taken_0x4471b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4471b8) {
            ctx->pc = 0x4471BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4471B8u;
            // 0x4471bc: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x447228u;
            goto label_447228;
        }
    }
    ctx->pc = 0x4471C0u;
    // 0x4471c0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4471c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4471c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4471c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4471c8: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x4471c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x4471cc: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x4471ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x4471d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4471D0u;
    {
        const bool branch_taken_0x4471d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4471D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4471D0u;
        // 0x4471d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4471d0) {
            ctx->pc = 0x4471E8u;
            goto label_4471e8;
        }
    }
    ctx->pc = 0x4471D8u;
    // 0x4471d8: 0xc111d58  jal         func_447560
    ctx->pc = 0x4471D8u;
    SET_GPR_U32(ctx, 31, 0x4471E0u);
    ctx->pc = 0x4471DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4471D8u;
    // 0x4471dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447560u, 0x4471D8u, 0x4471E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4471E0u;
label_4471e0:
    // 0x4471e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4471E0u;
    {
        const bool branch_taken_0x4471e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4471E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4471E0u;
        // 0x4471e4: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4471e0) {
            ctx->pc = 0x4471F4u;
            goto label_4471f4;
        }
    }
    ctx->pc = 0x4471E8u;
label_4471e8:
    // 0x4471e8: 0xc111a38  jal         func_4468E0
    ctx->pc = 0x4471E8u;
    SET_GPR_U32(ctx, 31, 0x4471F0u);
    ctx->pc = 0x4471ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4471E8u;
    // 0x4471ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4468E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4468E0u, 0x4471E8u, 0x4471F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4471F0u;
label_4471f0:
    // 0x4471f0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4471f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4471f4:
    // 0x4471f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4471f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4471f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4471f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4471fc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x4471fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x447200: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x447200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x447204: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x447204u;
    {
        const bool branch_taken_0x447204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x447208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447204u;
        // 0x447208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447204) {
            ctx->pc = 0x44721Cu;
            goto label_44721c;
        }
    }
    ctx->pc = 0x44720Cu;
    // 0x44720c: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x44720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x447210: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x447210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x447214: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x447214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x447218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x447218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44721c:
    // 0x44721c: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x44721cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x447220: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x447220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_447224:
    // 0x447224: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x447224u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_447228:
    // 0x447228: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x447228u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x44722c: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x44722cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x447230: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x447230u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x447234: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x447234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x447238: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x447238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x44723c: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x44723cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x447240: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x447240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x447244: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x447244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x447248: 0x3e00008  jr          $ra
    ctx->pc = 0x447248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447248u;
        // 0x44724c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447250u;
}
