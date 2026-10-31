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

// Function: sub_004CEF98
// Address: 0x4cef98 - 0x4cf090
void sub_004CEF98_0x4cef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CEF98_0x4cef98");
#endif

    switch (ctx->pc) {
        case 0x4cefb4u: goto label_4cefb4;
        case 0x4cf00cu: goto label_4cf00c;
        case 0x4cf054u: goto label_4cf054;
        default: break;
    }

    ctx->pc = 0x4cef98u;

    // 0x4cef98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cef9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cefa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cefa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cefa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cefa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cefa8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4cefa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4cefac: 0xc133448  jal         func_4CD120
    ctx->pc = 0x4CEFACu;
    SET_GPR_U32(ctx, 31, 0x4CEFB4u);
    ctx->pc = 0x4CEFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEFACu;
    // 0x4cefb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD120u, 0x4CEFACu, 0x4CEFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEFB4u;
label_4cefb4:
    // 0x4cefb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CEFB4u;
    {
        const bool branch_taken_0x4cefb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEFB4u;
        // 0x4cefb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cefb4) {
            ctx->pc = 0x4CEFC8u;
            goto label_4cefc8;
        }
    }
    ctx->pc = 0x4CEFBCu;
    // 0x4cefbc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4cefbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x4cefc0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x4CEFC0u;
    {
        const bool branch_taken_0x4cefc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEFC0u;
        // 0x4cefc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cefc0) {
            ctx->pc = 0x4CF078u;
            goto label_4cf078;
        }
    }
    ctx->pc = 0x4CEFC8u;
label_4cefc8:
    // 0x4cefc8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x4cefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4cefcc: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x4CEFCCu;
    {
        const bool branch_taken_0x4cefcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cefcc) {
            ctx->pc = 0x4CEFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CEFCCu;
            // 0x4cefd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CF078u;
            goto label_4cf078;
        }
    }
    ctx->pc = 0x4CEFD4u;
    // 0x4cefd4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x4cefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4cefd8: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4cefd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4cefdc: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x4cefdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x4cefe0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4cefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x4cefe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4cefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4cefe8: 0x2c421000  sltiu       $v0, $v0, 0x1000
    ctx->pc = 0x4cefe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4096) ? 1 : 0);
    // 0x4cefec: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4CEFECu;
    {
        const bool branch_taken_0x4cefec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEFECu;
        // 0x4ceff0: 0xa38823  subu        $s1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cefec) {
            ctx->pc = 0x4CF06Cu;
            goto label_4cf06c;
        }
    }
    ctx->pc = 0x4CEFF4u;
    // 0x4ceff4: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x4CEFF4u;
    {
        const bool branch_taken_0x4ceff4 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x4ceff4) {
            ctx->pc = 0x4CF06Cu;
            goto label_4cf06c;
        }
    }
    ctx->pc = 0x4CEFFCu;
    // 0x4ceffc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x4ceffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x4cf000: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4cf000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cf004: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4CF004u;
    SET_GPR_U32(ctx, 31, 0x4CF00Cu);
    ctx->pc = 0x4CF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF004u;
    // 0x4cf008: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CF004u, 0x4CF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF00Cu;
label_4cf00c:
    // 0x4cf00c: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x4cf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x4cf010: 0x2a241001  slti        $a0, $s1, 0x1001
    ctx->pc = 0x4cf010u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x4cf014: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x4cf014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x4cf018: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x4cf018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4cf01c: 0x64880a  movz        $s1, $v1, $a0
    ctx->pc = 0x4cf01cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4cf020: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x4cf020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x4cf024: 0x8e070064  lw          $a3, 0x64($s0)
    ctx->pc = 0x4cf024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x4cf028: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x4cf028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x4cf02c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4cf02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4cf030: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x4cf030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x4cf034: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x4cf034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
    // 0x4cf038: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x4cf038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x4cf03c: 0xae100094  sw          $s0, 0x94($s0)
    ctx->pc = 0x4cf03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 16));
    // 0x4cf040: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x4cf040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x4cf044: 0xae050088  sw          $a1, 0x88($s0)
    ctx->pc = 0x4cf044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    // 0x4cf048: 0xae070090  sw          $a3, 0x90($s0)
    ctx->pc = 0x4cf048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 7));
    // 0x4cf04c: 0xc133470  jal         func_4CD1C0
    ctx->pc = 0x4CF04Cu;
    SET_GPR_U32(ctx, 31, 0x4CF054u);
    ctx->pc = 0x4CF050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF04Cu;
    // 0x4cf050: 0xae03009c  sw          $v1, 0x9C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD1C0u, 0x4CF04Cu, 0x4CF054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF054u;
label_4cf054:
    // 0x4cf054: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CF054u;
    {
        const bool branch_taken_0x4cf054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf054) {
            ctx->pc = 0x4CF058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CF054u;
            // 0x4cf058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CF078u;
            goto label_4cf078;
        }
    }
    ctx->pc = 0x4CF05Cu;
    // 0x4cf05c: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x4cf05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x4cf060: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4cf060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4cf064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF064u;
    {
        const bool branch_taken_0x4cf064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF064u;
        // 0x4cf068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf064) {
            ctx->pc = 0x4CF078u;
            goto label_4cf078;
        }
    }
    ctx->pc = 0x4CF06Cu;
label_4cf06c:
    // 0x4cf06c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x4cf06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x4cf070: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x4cf070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x4cf074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cf074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf078:
    // 0x4cf078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cf078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cf07c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cf07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf080: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4cf080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cf084: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF084u;
        // 0x4cf088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF08Cu;
    // 0x4cf08c: 0x0  nop
    ctx->pc = 0x4cf08cu;
    // NOP
    ctx->pc = 0x4cf090u;
}
